COMMENT =	realtime audio and music engine for games

GH_ACCOUNT =	olofson
GH_PROJECT =	audiality2
GH_TAGNAME =	v1.9.4

SHARED_LIBS +=  audiality2                0.1

CATEGORIES =	audio

HOMEPAGE =	http://audiality.org/

MAINTAINER =	Anthony J. Bentley <anthony@anjbe.name>

# zlib
PERMIT_PACKAGE =	Yes
PERMIT_DISTFILES =	test/data/*.a2s are all rights reserved

WANTLIB += c SDL2 m

MODULES =		devel/cmake
LIB_DEPENDS =		devel/sdl2

CONFIGURE_ARGS =	-DUSE_JACK=OFF

NO_TEST =		Yes

.include <bsd.port.mk>
