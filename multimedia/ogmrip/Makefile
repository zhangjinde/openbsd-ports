COMMENT-main =		DVD ripper/converter
COMMENT-dvdcpy =	copy selected info from DVD

V =			1.0.1
DISTNAME =		ogmrip-$V
PKGNAME-main =		ogmrip-$V
PKGNAME-dvdcpy =	dvdcpy-$V
REVISION-dvdcpy =	5
REVISION-main =		10

SHARED_LIBS +=  ogmdvd-gtk                0.0 # 1.0
SHARED_LIBS +=  ogmdvd                    0.0 # 1.0
SHARED_LIBS +=  ogmjob                    0.0 # 1.0
SHARED_LIBS +=  ogmrip-gtk                0.0 # 1.0
SHARED_LIBS +=  ogmrip-lavc               0.0 # 1.0
SHARED_LIBS +=  ogmrip-mplayer            0.0 # 1.0
SHARED_LIBS +=  ogmrip                    0.0 # 1.0

MULTI_PACKAGES =	-main -dvdcpy

CATEGORIES =		multimedia

HOMEPAGE =		http://ogmrip.sourceforge.net/en/index.html

MAINTAINER =		Pascal Stumpf <pascal@stumpf.co>

# LGPLv2.1+
PERMIT_PACKAGE =	Yes

WANTLIB-main += ${WANTLIB} X11 Xcomposite Xcursor Xdamage Xext
WANTLIB-main += Xfixes Xi Xinerama Xrandr Xrender atk-1.0 c
WANTLIB-main += cairo dvdread dbus-1 dbus-glib-1 enca enchant expat ffi
WANTLIB-main += fontconfig freetype gdk-x11-2.0 gdk_pixbuf-2.0 gio-2.0
WANTLIB-main += glade-2.0 glib-2.0 gmodule-2.0 gobject-2.0 gthread-2.0
WANTLIB-main += gtk-x11-2.0 iconv intl jpeg m notify ogg pango-1.0
WANTLIB-main += pangocairo-1.0 pangoft2-1.0 pcre pixman-1 png pthread
WANTLIB-main += ${COMPILER_LIBCXX} theora tiff xcb xcb-render xcb-shm xml2 z
WANTLIB-main += harfbuzz graphite2 Xau Xdmcp lzma fribidi execinfo zstd

WANTLIB-dvdcpy += c dvdread

COMPILER =		base-clang ports-gcc base-gcc

MASTER_SITES =		${MASTER_SITE_SOURCEFORGE:=ogmrip/}

MODULES =		devel/gconf2 \
			textproc/intltool
BUILD_DEPENDS =		x11/mplayer \
			textproc/gsed
RUN_DEPENDS-main =	${RUN_DEPENDS} \
			STEM->=${V}:${PKGPATH},-dvdcpy \
			x11/mplayer \
			audio/lame \
			multimedia/mkvtoolnix \
			multimedia/ogmtools \
			audio/vorbis-tools \
			devel/desktop-file-utils \
			graphics/gocr \
			graphics/ocrad \
			graphics/tesseract/tesseract
LIB_DEPENDS-dvdcpy =	devel/libdvdread
LIB_DEPENDS-main =	${LIB_DEPENDS} \
			multimedia/libtheora \
			devel/gconf2 \
			devel/libglade2 \
			devel/libnotify \
			textproc/enchant \
			converters/enca \
			devel/libdvdread

USE_GMAKE =		Yes
LIBTOOL_FLAGS =		--tag=disable-static

CONFIGURE_STYLE =	gnu

MODGCONF2_SCHEMAS_DIR =	ogmrip

NO_TEST =		Yes

post-install:
	rm ${PREFIX}/lib/ogmrip/{audio,container,options,subp,video}-plugins/*.la

.include <bsd.port.mk>
