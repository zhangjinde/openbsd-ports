COMMENT =	OCaml Preprocessor and Pretty-Printer
CATEGORIES =	lang

EPOCH =		0
V =            	4.12+1
GH_ACCOUNT =	ocaml
GH_PROJECT =	camlp4
GH_TAGNAME =	${V}
WRKDIST =	${WRKDIR}/${GH_PROJECT}-${GH_TAGNAME:S/+/-/}
PKGNAME =	ocaml-${DISTNAME}
# No dynlink compatibility between releases
PKGSPEC =	ocaml-camlp4-=${V}v${EPOCH}

HOMEPAGE =	https://github.com/ocaml/camlp4/

MAINTAINER =	Christopher Zimmermann <chrisz@openbsd.org>

# LGPL >=2.1
PERMIT_PACKAGE =	Yes

MODULES =		lang/ocaml

WANTLIB +=		c m pthread

USE_GMAKE =		Yes

CONFIGURE_STYLE =	simple

BUILD_DEPENDS =         devel/ocaml-ocamlbuild

MAKE_ENV =		DESTDIR=${WRKINST}

ALL_TARGET =		byte

.include <bsd.port.arch.mk>
.if ${PROPERTIES:Mocaml_native}
ALL_TARGET +=		native
.endif

INSTALL_TARGET =	install install-META


pre-install:
	echo PKGDIR=${LOCALBASE}/lib/ocaml >>${WRKSRC}/config.sh
	echo LIBDIR=${LOCALBASE}/lib/ocaml >>${WRKSRC}/config.sh
	echo BINDIR=${LOCALBASE}/bin >>${WRKSRC}/config.sh


.include <bsd.port.mk>
