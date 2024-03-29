# ectool requires amd64_iopl(2)
# intelmetool requires <amd64/pio.h>
ONLY_FOR_ARCHS =	amd64

COMMENT =		utilities to work on firmware images and hardware

V =			4.16
DISTNAME =		coreboot-${V}
PKGNAME =		coreboot-utils-${V}
REVISION =		0

CATEGORIES =		sysutils devel

HOMEPAGE =		https://coreboot.org

MAINTAINER =		Klemens Nanni <kn@openbsd.org>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB =		c

MASTER_SITES =		https://coreboot.org/releases/

EXTRACT_SUFX =		.tar.xz
EXTRACT_FILES =		${DISTNAME}/{src/commonlib,util}

USE_GMAKE =		Yes

NO_TEST =		Yes

# some util/*/Makefile use [HOST]CC=gcc
MAKE_FLAGS =		CC=${CC} \
			HOSTCC=${CC}

FAKE_FLAGS =		PREFIX=${PREFIX}

# XXX intelmetool requires unsupported pcilib access methods
UTILS =			cbmem \
			ectool \
			ifdtool \
			nvramtool

do-build:
.for u in ${UTILS}
	env -i ${MAKE_ENV} ${MAKE_PROGRAM} -C ${WRKSRC}/util/${u} \
		${MAKE_FLAGS} ${ALL_TARGET}
.endfor

do-install:
.for u in ${UTILS}
	env -i ${MAKE_ENV} ${MAKE_PROGRAM} -C ${WRKSRC}/util/${u} \
		${FAKE_FLAGS} ${INSTALL_TARGET}
.endfor
	mv    ${PREFIX}/share/man/* ${PREFIX}/man/
	rmdir ${PREFIX}/share/man

.include <bsd.port.mk>
