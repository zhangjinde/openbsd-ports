BROKEN-i386 =		build fails in "Compiling file [...]/src/compiler/generic/genesis.lisp"
# ;; Compiling file /pobj/sbcl-2.0.1/sbcl-2.0.1/src/compiler/generic/genesis.lisp ...
# ;; Wrote file /pobj/sbcl-2.0.1/sbcl-2.0.1/obj/from-host/src/compiler/generic/genesis.fas-tmp
# 0 errors, 0 warnings
# ;;  Loading file obj/from-host/src/compiler/generic/genesis.fas ...
# ;;  Loaded file obj/from-host/src/compiler/generic/genesis.fas
# *** - OPEN: File
#       #P"/pobj/sbcl-2.0.1/sbcl-2.0.1/obj/from-xc/tls-init.lisp-expr" does not
#       exist
# The following restarts are available:
# SKIP           :R1      skip (GENESIS OBJECT-FILE-NAMES # ...)
# RETRY          :R2      retry (GENESIS OBJECT-FILE-NAMES # ...)
# STOP           :R3      stop loading file /pobj/sbcl-2.0.1/sbcl-2.0.1/make-genesis-2.lisp
# ABORT-BUILD    :R4      Abort building SBCL.
# ABORT          :R5      Abort main loop
# //testing for consistency of first and second GENESIS passes
# diff: output/genesis-2: No such file or directory   
# error: header files do not match between first and second GENESIS

# not yet ported to other arches
ONLY_FOR_ARCHS =	amd64 i386 powerpc
USE_WXNEEDED =		Yes

COMMENT=		compiler and runtime system for ANSI Common Lisp

V =			2.1.11
DISTNAME=		sbcl-${V}-source
PKGNAME=		sbcl-${V}
WRKDIST=		${WRKDIR}/sbcl-${V}
EXTRACT_SUFX=		.tar.bz2

CATEGORIES=		lang
HOMEPAGE=		http://www.sbcl.org/
MAINTAINER =		Joshua Elsasser <josh@elsasser.org>

# Public domain and BSD
PERMIT_PACKAGE=	Yes

MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=sbcl/}

WANTLIB=		c m util z

PSEUDO_FLAVORS=		native_bootstrap

FLAVORS=		threads
FLAVOR?=

MAKE_PARAMS =		--prefix=${PREFIX}

.if ${FLAVOR:Mthreads}
ONLY_FOR_ARCHS =	amd64 powerpc
MAKE_PARAMS +=		--with-sb-thread
WANTLIB+=		pthread
.endif
# enable features from --fancy other than :sb-thread
MAKE_PARAMS +=		--with-sb-core-compression \
			--with-sb-xref-for-internals

.if ${FLAVOR:Mnative_bootstrap}
BUILD_DEPENDS+=		lang/sbcl
BOOTSTRAP_CMD=		${LOCALBASE}/bin/sbcl \
			--disable-debugger --no-sysinit --no-userinit
.else
BUILD_DEPENDS +=	lang/clisp
BOOTSTRAP_CMD =		${LOCALBASE}/bin/clisp -q -norc
.endif
MAKE_PARAMS +=		--xc-host="${BOOTSTRAP_CMD}" ${EXTRA_PARAMS}
TEST_DEPENDS =		devel/gmp

# base makeinfo chokes on sbcl texinfo files
BUILD_DEPENDS +=	print/texinfo

USE_GMAKE=		Yes
PORTHOME=		${TMPDIR}
MAKE_ENV=		GNUMAKE=${GMAKE} INSTALL_ROOT=${PREFIX} \
			MAN_DIR=${PREFIX}/man INFO_DIR=${PREFIX}/info \
			MAKEINFO=${PREFIX}/bin/gmakeinfo

# Upstream asks that packagers append something like this to the
# version to distinguish official tarballs from third-party packages.
.if defined(REVISION) && !empty(REVISION)
LOCAL_VERSION =		openbsd.${REVISION}
.else
LOCAL_VERSION =		openbsd
.endif
VERSION_FILE =		${WRKSRC}/version.lisp-expr

pre-configure:
	sed -i 's/^"\([0-9.]*\)"$$/"\1.${LOCAL_VERSION}"/' ${VERSION_FILE}

do-build:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} SBCL_CONTRIB_TARGET=all \
		/bin/sh make.sh ${MAKE_PARAMS}
	cd ${WRKSRC}/doc/manual && touch sbcl.texinfo && \
		${SETENV} ${MAKE_ENV} ${GMAKE} asdf.info sbcl.info

do-install:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} /bin/sh install.sh

post-install:
	chown -R 0:0 ${PREFIX}/lib/sbcl
	rmdir ${PREFIX}/share/doc/sbcl/html

do-test:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} DONT_CLEAN_SBCL_CONTRIB=1 \
	    /bin/sh make-target-contrib.sh
	cd ${WRKSRC}/tests && ${SETENV} ${MAKE_ENV} /bin/sh run-tests.sh

.include <bsd.port.mk>
