# Keep in sync with games/renpy!!!
V =		7.3.5.606
COMMENT =	Ren'Py fork of pygame
PKGNAME =	pygame_sdl2-${V}
CATEGORIES =	games x11
REVISION =	0

GH_ACCOUNT =	renpy
GH_PROJECT =	pygame_sdl2
GH_TAGNAME =	renpy-${V}

MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# LGPLv2.1+ & zlib
PERMIT_PACKAGE =	Yes

# Not yet. We need to wait for Ren'Py to make the switch.
#FLAVORS =	python3
#FLAVOR ?=

WANTLIB += SDL2 SDL2_image SDL2_mixer SDL2_ttf jpeg png pthread
WANTLIB += ${MODPY_WANTLIB}

MODULES =	lang/python
MODPY_VERSION =	${MODPY_DEFAULT_VERSION_2}
MODPY_SETUPTOOLS =	Yes

BUILD_DEPENDS =	lang/cython,python3

LIB_DEPENDS =	devel/sdl2-image \
		devel/sdl2-mixer \
		devel/sdl2-ttf

NO_TEST =	Yes

.include <bsd.port.mk>
