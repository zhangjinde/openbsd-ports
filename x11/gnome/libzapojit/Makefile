COMMENT=	GLib/GObject wrapper for SkyDrive and Hotmail REST APIs

GNOME_PROJECT=	libzapojit
GNOME_VERSION=	0.0.3
REVISION=	5

API_V=		0.0
SUBST_VARS=	API_V

SHARED_LIBS +=  zapojit-0.0               0.0 # 0.0

# LGPLv2.1
PERMIT_PACKAGE=	Yes

WANTLIB += ffi gio-2.0 glib-2.0 gmodule-2.0 goa-1.0 gobject-2.0
WANTLIB += gthread-2.0 json-glib-1.0 lzma m pcre pthread rest-0.7
WANTLIB += soup-2.4 soup-gnome-2.4 sqlite3 xml2 z iconv intl
WANTLIB += brotlicommon brotlidec idn2 psl unistring

MODULES=	x11/gnome

LIB_DEPENDS=	x11/gnome/online-accounts

MODGNOME_TOOLS +=	gobject-introspection

CONFIGURE_STYLE=	gnu

.include <bsd.port.mk>
