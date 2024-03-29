# no RCS Id here, please

TRACKER_VERSION=	1.0

COMMENT=		GNOME file manager

GNOME_PROJECT=		nautilus
GNOME_VERSION=		3.12.2

SHARED_LIBS +=  nautilus-extension   3.0      # 5.0

CATEGORIES=		x11

# GPLv2 - LGPLv2 - GFPLv1.1
PERMIT_PACKAGE=	Yes

WANTLIB += ICE SM X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi
WANTLIB += Xinerama Xrandr Xrender atk-1.0 atk-bridge-2.0 atspi
WANTLIB += c cairo cairo-gobject dbus-1 exempi exif expat ffi
WANTLIB += fontconfig freetype gailutil-3 gdk-3 gdk_pixbuf-2.0
WANTLIB += gio-2.0 glib-2.0 gmodule-2.0 gnome-desktop-3 gobject-2.0
WANTLIB += graphite2 gthread-2.0 gtk-3 harfbuzz m notify pango-1.0
WANTLIB += pangocairo-1.0 pangoft2-1.0 pcre pixman-1 png pthread
WANTLIB += pthread-stubs xcb xcb-render xcb-shm xml2 z
WANTLIB += icudata icui18n icuuc kvm sqlite3 uuid
WANTLIB += tracker-sparql-${TRACKER_VERSION}
WANTLIB += lib/tracker-${TRACKER_VERSION}/tracker-data
WANTLIB += lib/tracker-${TRACKER_VERSION}/tracker-common

MODULES=		x11/gnome \
			devel/dconf

RUN_DEPENDS=		x11/gnome/gvfs \
			devel/gsettings-desktop-schemas

LIB_DEPENDS=		x11/gnome/desktop \
			devel/libnotify \
			graphics/libexif \
			textproc/exempi \
			x11/gnome/tracker

MODGNOME_TOOLS=		desktop-file-utils gobject-introspection shared-mime-info
MODGNOME_CPPFLAGS=	-I${X11BASE}/include
MODGNOME_LDFLAGS=	-L${X11BASE}/lib

FAKE_FLAGS=		sysconfdir=${PREFIX}/share/examples/nautilus

# needs 'org.gnome.nautilus.preferences'
TEST_DEPENDS=		${BASE_PKGPATH}
TEST_IS_INTERACTIVE=	x11

post-install:
	rm ${PREFIX}/lib/nautilus/extensions-3.0/*.{a,la}

.include "Makefile.inc"
.include <bsd.port.mk>
