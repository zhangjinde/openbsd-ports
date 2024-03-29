COMMENT =		generic multi-emulator frontend

V =			1.7.6
DISTNAME =		RetroArch-$V
PKGNAME =		retroarch-$V
REVISION =		4

CATEGORIES =		emulators

HOMEPAGE =		https://www.libretro.com/

# code GPLv3+, assets CC-BY-4.0
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} EGL GL Qt5Concurrent Qt5Core Qt5Gui
WANTLIB += Qt5Network Qt5Widgets SDL2 X11 X11-xcb Xext Xinerama
WANTLIB += Xrandr Xv Xxf86vm ass avcodec avformat avutil c crypto
WANTLIB += drm freetype gbm m openal ssl swresample swscale usb-1.0
WANTLIB += xcb xkbcommon z

MASTER_SITES =		https://github.com/libretro/RetroArch/releases/download/v$V/
EXTRACT_SUFX =		.tar.xz

MODULES =		x11/qt5
RUN_DEPENDS =		devel/desktop-file-utils
BUILD_DEPENDS =		graphics/vulkan-tools
LIB_DEPENDS =		audio/openal \
			devel/libusb1 \
			devel/sdl2 \
			graphics/ffmpeg \
			x11/xkbcommon

MAKE_FLAGS =		V=1 \
			CXX="${CXX}" \
			HAVE_OSS=0 \
			HAVE_OSS_BSD=0 \
			OPTIMIZE_FLAG=
FAKE_FLAGS =		GLOBAL_CONFIG_DIR=${PREFIX}/share/examples

USE_GMAKE =		Yes
CONFIGURE_STYLE =	simple
CONFIGURE_ENV =		MAN_DIR=${PREFIX}/man \
			INCLUDE_DIRS="-I${LOCALBASE}/include -I${X11BASE}/include" \
			LIBRARY_DIRS="-L${LOCALBASE}/lib -L${X11BASE}/lib"
CONFIGURE_ARGS =	--disable-discord \
			--disable-jack \
			--disable-wayland \
			--disable-pulse \
			--disable-oss \
			--disable-v4l2 \
			--enable-al

NO_TEST =		Yes

# strip out byte order marks that break GCC 4.2
post-extract:
	sed -i s/$$(printf '\xef\xbb\xbf')// ${WRKSRC}/intl/msg_* \
		${WRKSRC}/menu/widgets/menu_osk_utf8_pages.h

pre-build:
	${SUBST_CMD} ${WRKSRC}/retroarch.cfg

.include <bsd.port.mk>
