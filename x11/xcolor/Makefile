BROKEN-sparc64 = "error[E0412]: cannot find type c_char in this scope"

COMMENT =	lightweight color picker

GH_ACCOUNT =	Soft
GH_PROJECT =	xcolor
GH_TAGNAME =	0.5.1
REVISION =	0

CATEGORIES =	x11

HOMEPAGE =	https://soft.github.io/xcolor/

MAINTAINER =	Laurence Tratt <laurie@tratt.net>

# MIT
PERMIT_PACKAGE =	Yes

WANTLIB += c c++abi m pthread xcb xcb-shape X11 X11-xcb Xcursor

MODULES =		devel/cargo \
			lang/python

MODPY_RUNDEP =		No

DISTFILES +=		${DISTNAME}${EXTRACT_SUFX}

.include "crates.inc"

CONFIGURE_STYLE =	cargo
SEPARATE_BUILD =	Yes
USE_GMAKE =		Yes

MODCARGO_RUSTFLAGS =	-L${X11BASE}/lib

post-install:
	${INSTALL_MAN} ${WRKSRC}/man/xcolor.1 ${PREFIX}/man/man1/

.include <bsd.port.mk>
