COMMENT =		owncloud sync client

V = 			2.10.1.7187
DISTNAME =		ownCloud-${V}
PKGNAME =  		owncloudclient-${V}

SHARED_LIBS +=		owncloudsync	7.2
SHARED_LIBS +=		owncloud_csync	1.1

CATEGORIES =		net

HOMEPAGE =		https://owncloud.com/desktop-app/

MAINTAINER =		Kirill Bychkov <kirby@openbsd.org>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += Qt5Concurrent Qt5Core Qt5DBus Qt5Gui Qt5Network Qt5Widgets
WANTLIB += Qt5Xml c m qt5keychain sqlite3 z
WANTLIB += ${COMPILER_LIBCXX} lib/inotify/inotify

MASTER_SITES =		https://download.owncloud.com/desktop/ownCloud/stable/latest/source/ \
			https://download.owncloud.com/desktop/ownCloud/stable/${V}/
EXTRACT_SUFX =		.tar.xz

MODULES =		devel/cmake x11/qt5

BUILD_DEPENDS = 	devel/kf5/extra-cmake-modules
RUN_DEPENDS =		devel/desktop-file-utils \
			misc/shared-mime-info \
			x11/gtk+3,-guic
LIB_DEPENDS =		databases/sqlite3 \
			devel/libinotify \
			security/qtkeychain

CONFIGURE_ARGS +=	-Wno-dev \
			-DSYSCONF_INSTALL_DIR=${SYSCONFDIR} \
			-DKDE_INSTALL_PLUGINDIR=${PREFIX}/lib/ownCloud/plugins/ \
			-DCMAKE_C_FLAGS="${CFLAGS} \
				-I/usr/include \
				-I${LOCALBASE}/include/inotify \
				-I${LOCALBASE}/include/qtkeychain \
				-I${LOCALBASE}/include" \
			-DCMAKE_CXX_FLAGS="${CXXFLAGS} \
				-I/usr/include \
				-I${LOCALBASE}/include/inotify \
				-I${LOCALBASE}/include/qtkeychain \
				-I${LOCALBASE}/include" \
			-DCMAKE_EXE_LINKER_FLAGS="${LDFLAGS} \
				-L${LOCALBASE}/lib/inotify \
				-L${LOCALBASE}/lib \
				-linotify \
				-Wl,-rpath=${LOCALBASE}/lib/inotify" \
			-DCMAKE_DISABLE_FIND_PACKAGE_KF5=TRUE \
			-DCMAKE_DISABLE_FIND_PACKAGE_CMocka=TRUE \
			-DInotify_INCLUDE_DIRS=${LOCALBASE}/include/inotify \
			-DInotify_LIBRARIES=${LOCALBASE}/lib/inotify \
			-DCSYNC_REQUIRED_LIBRARIES=c

NO_TEST =		Yes

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/ownCloud/
	mv ${WRKINST}/etc/ownCloud ${PREFIX}/share/examples/

.include <bsd.port.mk>
