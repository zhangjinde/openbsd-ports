USE_WXNEEDED =	Yes

COMMENT =		accounting for KDE 5

VERSION =		5.1.2
DISTNAME =		kmymoney-${VERSION}
REVISION =		1

CATEGORIES =		productivity x11

HOMEPAGE =		https://kmymoney.org/

SHARED_LIBS +=  kmm_csvimportercore       0.0 # 5.1.2
SHARED_LIBS +=  kmm_icons                 0.0 # 5.1.2
SHARED_LIBS +=  kmm_menus                 0.0 # 5.1.2
SHARED_LIBS +=  kmm_models                0.0 # 5.1.2
SHARED_LIBS +=  kmm_mymoney               0.1 # 5.1.2
SHARED_LIBS +=  kmm_payeeidentifier       0.0 # 5.1.0
SHARED_LIBS +=  kmm_plugin                0.0 # 5.1.2
SHARED_LIBS +=  kmm_printer               0.0 # 5.1.2
SHARED_LIBS +=  kmm_settings              0.0 # 5.1.2
SHARED_LIBS +=  kmm_widgets               0.1 # 5.1.2

MAINTAINER =		Rafael Sadowski <rsadowski@openbsd.org>

# GPLv2+
PERMIT_PACKAGE =	Yes

MASTER_SITES =		${MASTER_SITE_KDE:=stable/kmymoney/${VERSION}/src/}

WANTLIB += ${COMPILER_LIBCXX} KChart KF5Activities KF5AkonadiCore
WANTLIB += KF5Archive KF5Auth KF5AuthCore KF5Bookmarks KF5Codecs
WANTLIB += KF5Completion KF5ConfigCore KF5ConfigGui KF5ConfigWidgets
WANTLIB += KF5Contacts KF5CoreAddons KF5Holidays KF5I18n KF5IconThemes
WANTLIB += KF5IdentityManagement KF5ItemModels KF5ItemViews KF5JobWidgets
WANTLIB += KF5KCMUtils KF5KIOCore KF5KIOFileWidgets KF5KIOGui
WANTLIB += KF5KIONTLM KF5KIOWidgets KF5Notifications KF5PimTextEdit
WANTLIB += KF5Service KF5Solid KF5SonnetUi KF5TextWidgets KF5Wallet
WANTLIB += KF5WebKit KF5WidgetsAddons KF5WindowSystem KF5XmlGui
WANTLIB += Qt5Concurrent Qt5Core Qt5DBus Qt5Gui Qt5Network Qt5PrintSupport
WANTLIB += Qt5Qml Qt5QmlModels Qt5Quick Qt5QuickWidgets Qt5Sql
WANTLIB += Qt5WebKit Qt5WebKitWidgets Qt5Widgets Qt5Xml X11 alkimia5
WANTLIB += aqbanking c db gmp gpgmepp gwengui-cpp gwengui-qt5
WANTLIB += gwenhywfar ical icalss icalvcal icui18n icuuc m ofx db_cxx
WANTLIB += osp ${MODPY_WANTLIB}


MODULES =		lang/python \
			devel/kf5

CONFIGURE_STYLE =	cmake

BUILD_DEPENDS =		devel/boost \
			devel/gettext,-tools \
			misc/shared-mime-info \
			textproc/libical,-glib \
			x11/kde-applications/kqtquickcharts

RUN_DEPENDS =		devel/desktop-file-utils \
			misc/p5-Finance-Quote \
			misc/shared-mime-info \
			security/p5-Crypt-SSLeay \
			textproc/p5-XML-Parser \
			textproc/p5-XML-Writer \
			www/p5-libwww \
			www/woob \
			x11/gtk+3,-guic \
			x11/kde-applications/kqtquickcharts

LIB_DEPENDS =		devel/gwenhywfar \
			devel/kf5/kactivities \
			devel/kf5/karchive \
			devel/kf5/kauth \
			devel/kf5/kbookmarks \
			devel/kf5/kcmutils \
			devel/kf5/kcodecs \
			devel/kf5/kcompletion \
			devel/kf5/kconfig \
			devel/kf5/kcontacts \
			devel/kf5/kcontacts \
			devel/kf5/kcoreaddons \
			devel/kf5/kdewebkit \
			devel/kf5/kholidays \
			devel/kf5/kholidays \
			devel/kf5/kio \
			devel/kf5/kitemmodels \
			devel/kf5/kitemviews \
			devel/kf5/kjobwidgets \
			devel/kf5/knotifications \
			devel/kf5/kservice \
			devel/kf5/ktextwidgets \
			devel/kf5/kwallet \
			devel/kf5/kwidgetsaddons  \
			devel/kf5/kdewebkit  \
			devel/kf5/kxmlgui \
			devel/kf5/solid \
			devel/kf5/sonnet \
			devel/libofx \
			graphics/kdiagram \
			productivity/aqbanking \
			productivity/libalkimia>=8.0 \
			security/gpgme,,-qt \
			textproc/libical \
			x11/kde-applications/akonadi \
			x11/kde-applications/kidentitymanagement \
			x11/kde-applications/kpimtextedit \
			x11/qt5/qtdeclarative \
			x11/qt5/qtwebkit

CONFIGURE_ARGS =	-DUSE_QT_DESIGNER=OFF \
			-DENABLE_WEBENGINE=OFF \
			-DCMAKE_DISABLE_FIND_PACKAGE_Doxygen=ON

TEST_IS_INTERACTIVE =	X11

.include <bsd.port.mk>
