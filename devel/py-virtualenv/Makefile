COMMENT =		virtual Python environment builder

# more current virtualenv versions need additional py2 RDEPs
MODPY_EGG_VERSION =	16.7.10
DISTNAME =		virtualenv-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME}
CATEGORIES =		devel

HOMEPAGE =		https://virtualenv.pypa.io/

# MIT
PERMIT_PACKAGE =	Yes

MODULES =		lang/python

MODPY_PI =		Yes
MODPY_PYTEST =		Yes
MODPY_PYTEST_ARGS =	tests
MODPY_SETUPTOOLS =	Yes

# messes up naming of packaged wheels
UPDATE_PLIST_ARGS =	-i MODPY_PY_PREFIX

FLAVORS =		python3
FLAVOR ?=

.if ${FLAVOR:Mpython3}
TEST_DEPENDS =		devel/py-mock${MODPY_FLAVOR}
.endif

post-install:
	mv ${PREFIX}/bin/virtualenv{,${MODPY_BIN_SUFFIX}}

.include <bsd.port.mk>
