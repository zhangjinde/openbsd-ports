COMMENT=		SAX-based render library for SVG files

GNOME_PROJECT=		librsvg
STABLE_VERSION=		2.54.1
OLD_VERSION=		2.40.21
DISTFILES=		librsvg-${STABLE_VERSION}${EXTRACT_SUFX}:0 \
			librsvg-${OLD_VERSION}${EXTRACT_SUFX}:1

MASTER_SITES0=		${MASTER_SITE_GNOME:=sources/${GNOME_PROJECT}/${STABLE_VERSION:C/^([0-9]+\.[0-9]+).*/\1/}/}
MASTER_SITES1=		${MASTER_SITE_GNOME:=sources/${GNOME_PROJECT}/${OLD_VERSION:C/^([0-9]+\.[0-9]+).*/\1/}/}

DEBUG_PACKAGES=		${BUILD_PACKAGES}

.include <bsd.port.arch.mk>

### stable
.if ${PROPERTIES:Mrust}
SHARED_LIBS +=  rsvg-2               41.0     # 50.0
GNOME_VERSION=		${STABLE_VERSION}
MODULES +=	 	lang/python
MODGNOME_TOOLS +=	gi-docgen
MODPY_RUNDEP=		No
BUILD_DEPENDS=		lang/rust \
			textproc/py-docutils${MODPY_FLAVOR}
PKG_ARGS=		-Dold=0 -Dstable=1
MAKE_ENV +=		CARGO_BUILD_JOBS=${MAKE_JOBS} \
			CARGO_HOME=${WRKBUILD}/cargo-home \
			CARGO_PROFILE_RELEASE_OPT_LEVEL=2 \
			CARGO_PROFILE_RELEASE_DEBUG=1
MAKE_FLAGS +=		V=1
WANTLIB += ${COMPILER_LIBCXX} Xau Xdmcp cairo-gobject jpeg
.else
### old
REVISION=		3
SHARED_LIBS +=  rsvg-2               38.2     # 42.20
GNOME_VERSION=		${OLD_VERSION}
PATCH_LIST=		old-patch-*
PKG_ARGS=		-Dold=1 -Dstable=0
WANTLIB += ${COMPILER_LIBCXX} croco-0.6 ffi gmodule-2.0 jpeg pcre Xau Xdmcp
LIB_DEPENDS +=		www/libcroco
.endif

CATEGORIES=		devel graphics

# GPLv2/LGPLv2
PERMIT_PACKAGE=		Yes

WANTLIB += X11 Xext Xrender c cairo expat ffi fontconfig
WANTLIB += freetype fribidi gdk_pixbuf-2.0 gio-2.0 glib-2.0
WANTLIB += gmodule-2.0 gobject-2.0 graphite2 harfbuzz iconv
WANTLIB += intl lzma m pango-1.0 pangocairo-1.0 pangoft2-1.0 pcre
WANTLIB += pixman-1 png pthread xcb xcb-render xcb-shm xml2 z

MODULES +=		x11/gnome

MODGNOME_TOOLS +=	gobject-introspection vala

LIB_DEPENDS +=		devel/pango \
			graphics/gdk-pixbuf2 \
			textproc/libxml

CONFIGURE_STYLE=	gnu
CONFIGURE_ARGS=		--disable-tools

.include <bsd.port.arch.mk>
.if !${PROPERTIES:Mlld}
# error: -Bsymbolic-functions requested but not supported by ld
CONFIGURE_ARGS +=	--disable-Bsymbolic
.endif

post-install:
	rm ${PREFIX}/lib/gdk-pixbuf-2.0/2.10.0/loaders/*.{a,la}

.include <bsd.port.mk>
