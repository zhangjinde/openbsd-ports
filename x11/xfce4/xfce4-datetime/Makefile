COMMENT=	Xfce4 datetime and calendar plugin

XFCE_VERSION=	0.8.1
XFCE_PLUGIN=	datetime
REVISION=	1

# GPLv2
PERMIT_PACKAGE=	Yes

MODULES=	x11/xfce4

WANTLIB += X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama
WANTLIB += Xrandr Xrender atk-1.0 cairo expat fontconfig freetype
WANTLIB += gdk_pixbuf-2.0 gio-2.0 glib-2.0 gmodule-2.0
WANTLIB += gobject-2.0 m pango-1.0 pangocairo-1.0
WANTLIB += pangoft2-1.0 pixman-1 png xcb fribidi
WANTLIB += xcb-util xcb-render xcb-shm xfce4util xfce4ui-2 z
WANTLIB += ICE SM X11-xcb ffi pcre startup-notification-1
WANTLIB += harfbuzz graphite2 pthread iconv intl
WANTLIB += atk-bridge-2.0 cairo-gobject epoxy gdk-3 gtk-3
WANTLIB += ${COMPILER_LIBCXX}
WANTLIB += Xau Xdmcp execinfo jpeg

.include <bsd.port.mk>
