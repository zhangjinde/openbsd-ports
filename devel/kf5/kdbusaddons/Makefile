COMMENT =	KDE convenience classes for DBus
DISTNAME =	kdbusaddons-${VERSION}

SHARED_LIBS =	KF5DBusAddons		6.1

WANTLIB += ${COMPILER_LIBCXX} Qt5Core Qt5DBus Qt5Gui Qt5X11Extras
WANTLIB += c m

LIB_DEPENDS =	x11/qt5/qtx11extras

# XXX kdbusinterprocesslocktest tests stuck anyway
PORTHOME =		${WRKDIR}
TESTS_IS_INTERACTIVE =	X11

.include <bsd.port.mk>
