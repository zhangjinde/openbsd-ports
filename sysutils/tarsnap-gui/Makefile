COMMENT =		frontend to the popular Tarsnap backup service

GH_ACCOUNT =		Tarsnap
GH_PROJECT =		tarsnap-gui
GH_TAGNAME =		v1.0.2

CATEGORIES =		sysutils

MAINTAINER =		Josh Grosse <josh@jggimi.net>

# BSD
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} GL Qt5Core Qt5Gui Qt5Network Qt5Sql
WANTLIB += Qt5Widgets c m

MODULES =		devel/qmake x11/qt5
RUN_DEPENDS =		sysutils/tarsnap

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/tarsnap-gui ${PREFIX}/bin/tarsnap-gui

.include <bsd.port.mk>
