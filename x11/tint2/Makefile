ONLY_FOR_ARCHS=	${APM_ARCHS}

COMMENT=	freedesktop-compliant panel

V=		16.7
CATEGORIES=	x11
DISTNAME=	tint2-${V}
HOMEPAGE=	https://gitlab.com/o9000/tint2/
REVISION=	0

# GPLv2 only
PERMIT_PACKAGE=	Yes

MASTER_SITES=	https://gitlab.com/o9000/tint2/-/archive/${V}/

WANTLIB =  Imlib2 X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama
WANTLIB += Xrandr Xrender atk-1.0 c cairo fontconfig freetype
WANTLIB += gdk-x11-2.0 gdk_pixbuf-2.0 gio-2.0 glib-2.0 gobject-2.0
WANTLIB += gthread-2.0 gtk-x11-2.0 harfbuzz intl m pango-1.0
WANTLIB += pangocairo-1.0 pangoft2-1.0 pthread rsvg-2
WANTLIB += startup-notification-1 z

BUILD_DEPENDS=	devel/gettext,-tools

LIB_DEPENDS=	devel/pango \
		devel/startup-notification \
		x11/gnome/librsvg \
		graphics/imlib2 \
		x11/gtk+2

MODULES=	devel/cmake \
		x11/gnome

MODGNOME_TOOLS+= desktop-file-utils \
		gtk-update-icon-cache \
		shared-mime-info

NO_TEST=	Yes

.include <bsd.port.mk>
