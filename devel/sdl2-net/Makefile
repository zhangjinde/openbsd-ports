V =		2.0.1
COMMENT =	SDL2 cross-platform networking library
DISTNAME =	SDL2_net-${V}
PKGNAME =	sdl2-net-${V}
CATEGORIES =	devel net
REVISION =	1

SHARED_LIBS +=	SDL2_net		0.0 # 0.0

HOMEPAGE =	https://www.libsdl.org/projects/SDL_net/

# zlib
PERMIT_PACKAGE =	Yes

WANTLIB += SDL2 m pthread sndio usbhid
WANTLIB += X11 Xcursor Xext Xfixes Xi Xinerama Xrandr Xrender Xss Xxf86vm
WANTLIB += samplerate xcb

MASTER_SITES =	https://www.libsdl.org/projects/SDL_net/release/

LIB_DEPENDS =	devel/sdl2

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS +=	--disable-gui

SEPARATE_BUILD =	Yes

.include <bsd.port.mk>
