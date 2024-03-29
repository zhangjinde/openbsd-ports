COMMENT =	small and fast Qt image viewer

GH_ACCOUNT =	nomacs
GH_PROJECT =	nomacs
GH_TAGNAME =	3.17.2206

CATEGORIES =	graphics

HOMEPAGE =	https://nomacs.org

MAINTAINER =	Rafael Sadowski <rsadowski@openbsd.org>

SHARED_LIBS +=  nomacsCore                6.0 # 3.3

# GPLv3
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} Qt5Concurrent Qt5Core Qt5Gui Qt5Network
WANTLIB += Qt5PrintSupport Qt5Svg Qt5Widgets c exiv2 lcms2 m opencv_core
WANTLIB += opencv_imgproc quazip5 raw tiff

MODULES =		devel/cmake \
			x11/qt5 \

RUN_DEPENDS =		devel/desktop-file-utils \
			x11/gtk+3,-guic \
			x11/qt5/qtimageformats

LIB_DEPENDS =		archivers/quazip \
			graphics/exiv2 \
			graphics/lcms2 \
			graphics/libraw \
			graphics/opencv \
			graphics/tiff \
			x11/qt5/qtsvg

CONFIGURE_ARGS =	-DUSE_SYSTEM_QUAZIP=ON \
			-DENABLE_TRANSLATIONS=ON \
			-DCMAKE_DISABLE_FIND_PACKAGE_Python=ON

WRKDIST =		${WRKDIR}/${PKGNAME}/ImageLounge

NO_TEST =		Yes

pre-configure:
	find ${WRKSRC} -type f -name "*.cpp" -exec sed -i \
		's,<quazip/JlCompress.h>,<quazip5/JlCompress.h>,' {} \;

.include <bsd.port.mk>
