USE_WXNEEDED =	Yes

COMMENT =	letter order game
DISTNAME =	kanagram-${VERSION}
CATEGORIES =	education x11

HOMEPAGE =	https://edu.kde.org/kanagram/

WANTLIB += ${COMPILER_LIBCXX} KEduVocDocument KF5Attica KF5Auth
WANTLIB += KF5AuthCore KF5Codecs KF5ConfigCore KF5ConfigGui KF5ConfigWidgets
WANTLIB += KF5CoreAddons KF5Crash KF5I18n KF5NewStuff KF5NewStuffCore
WANTLIB += KF5Service KF5SonnetCore KF5WidgetsAddons KF5XmlGui
WANTLIB += Qt5Core Qt5DBus Qt5Gui Qt5Network Qt5Qml Qt5QmlModels
WANTLIB += Qt5Quick Qt5TextToSpeech Qt5Widgets Qt5Xml c m

MODKDE5_DESKTOP_FILE = yes
MODKDE5_ICON_CACHE = yes
MODKDE5_TRANSLATIONS = yes
MODKF5_I18N_CONFLICT = yes
MODKF5_L10N_CONFLICT = yes
MODKDE5_DOCS = yes

BUILD_DEPENDS =	devel/kf5/kio

RUN_DEPENDS =	devel/kf5/kio

LIB_DEPENDS =	devel/kf5/attica \
		devel/kf5/kauth \
		devel/kf5/kcodecs \
		devel/kf5/kconfig \
		devel/kf5/kconfigwidgets \
		devel/kf5/kcoreaddons \
		devel/kf5/kcrash \
		devel/kf5/ki18n \
		devel/kf5/knewstuff \
		devel/kf5/kservice \
		devel/kf5/kwidgetsaddons \
		devel/kf5/kxmlgui \
		devel/kf5/sonnet \
		x11/kde-applications/libkeduvocdocument \
		x11/qt5/qtdeclarative \
		x11/qt5/qtspeech

TEST_IS_INTERACTIVE =	X11

.include <bsd.port.mk>
