COMMENT =	frenetic space shoot-em-up

GH_ACCOUNT =	olofson
GH_PROJECT =	koboredux
GH_TAGNAME =	v0.7.5.1
REVISION =	2

CATEGORIES =	games

HOMEPAGE =	http://koboredux.com/

MAINTAINER =	Anthony J. Bentley <anthony@anjbe.name>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} SDL2 SDL2_image audiality2 c m

COMPILER =		base-clang ports-gcc base-gcc

MODULES =		devel/cmake
RUN_DEPENDS =		devel/desktop-file-utils
LIB_DEPENDS =		audio/audiality2 \
			devel/sdl2-image

# KOBO_EXTRA_LIBRARIES due to https://github.com/olofson/koboredux/issues/454
CONFIGURE_ARGS =	-DKOBO_EXTRA_LIBRARIES=

NO_TEST =		Yes

.include <bsd.port.mk>
