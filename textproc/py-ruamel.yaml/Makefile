COMMENT =		YAML 1.2 loader/dumper package for Python

MODPY_EGG_VERSION =	0.17.21
DISTNAME =		ruamel.yaml-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME}

CATEGORIES =		textproc

# MIT
PERMIT_PACKAGE =	Yes

WANTLIB =		${MODPY_WANTLIB} pthread

MODULES =		lang/python
MODPY_PI =		Yes
MODPY_SETUPTOOLS =	Yes

FLAVORS =		python3
FLAVOR =		python3

RUN_DEPENDS =		textproc/py-ruamel.yaml.clib${MODPY_FLAVOR}

.include <bsd.port.mk>
