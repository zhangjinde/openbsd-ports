COMMENT =	send messages via Pushover

MODPY_EGG_VERSION =	0.4
EPOCH =		0

DISTNAME =	python-pushover-${MODPY_EGG_VERSION}
PKGNAME =	py-${DISTNAME:S/python-//}
REVISION =	1

CATEGORIES =	sysutils

# BSD
PERMIT_PACKAGE =	Yes

MODULES =		lang/python

MODPY_PI =		Yes
MODPY_SETUPTOOLS =	Yes

FLAVORS =	python3
FLAVOR =	python3

RUN_DEPENDS =		www/py-requests${MODPY_FLAVOR}>=2.20.0

.include <bsd.port.mk>
