COMMENT =	client library and CLI for Planet's public API

MODPY_EGG_VERSION =	1.4.9
DISTNAME =	planet-${MODPY_EGG_VERSION}
PKGNAME =	py-${DISTNAME}

REVISION =	0

CATEGORIES =	geo

# Apache 2.0
PERMIT_PACKAGE =	Yes

MODULES =	lang/python

MODPY_PI =		Yes
MODPY_SETUPTOOLS =	Yes

FLAVORS =		python3
FLAVOR =		python3

# tests not bundled; test infrastructure left here for manual fetches
# should be included after 1.5.0:
# https://github.com/planetlabs/planet-client-python/issues/199
NO_TEST =	Yes

MODPY_PYTEST =	Yes
RUN_DEPENDS +=	devel/py-click${MODPY_FLAVOR} \
		www/py-requests${MODPY_FLAVOR} \
		www/py-requests-futures${MODPY_FLAVOR}
TEST_DEPENDS =	devel/py-mock${MODPY_FLAVOR} \
		www/py-requests-mock${MODPY_FLAVOR} \
		devel/py-tz${MODPY_FLAVOR}

post-install:
	rm ${PREFIX}/LICENSE

.include <bsd.port.mk>
