COMMENT =		python package that provides useful locks

MODPY_EGG_VERSION =	0.15
DISTNAME =		fasteners-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME}
REVISION =		3

CATEGORIES =		devel

HOMEPAGE =		https://github.com/harlowja/fasteners

# Apache 2.0
PERMIT_PACKAGE =	Yes

MODULES =		lang/python

MODPY_PI =		Yes
MODPY_SETUPTOOLS =	Yes
MODPY_PYTEST =		Yes
MODPY_PYTEST_ARGS =	fasteners

FLAVORS =		python3
FLAVOR =		python3

RUN_DEPENDS =		devel/py-six${MODPY_FLAVOR}

TEST_DEPENDS =		devel/py-pbr${MODPY_FLAVOR} \
			devel/py-testtools${MODPY_FLAVOR}

.include <bsd.port.mk>
