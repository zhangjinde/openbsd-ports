COMMENT =		JSON encoder/decoder

MODPY_EGG_VERSION =	3.17.6
DISTNAME =		simplejson-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME}

CATEGORIES =		devel

# MIT/AFLv2.1
PERMIT_PACKAGE =	Yes

WANTLIB += ${MODPY_WANTLIB} pthread

MODULES =		lang/python

MODPY_PI =		Yes
MODPY_SETUPTOOLS =	Yes
MODPY_PYTEST_ARGS =	simplejson/tests

# security/floss is still 2-only
FLAVORS =		python3
FLAVOR ?=

.include <bsd.port.mk>
