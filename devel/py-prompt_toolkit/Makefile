COMMENT=		python library for building powerful interactive CLI

MODPY_EGG_VERSION=	3.0.24
DISTNAME=		prompt_toolkit-${MODPY_EGG_VERSION}
PKGNAME=		py-${DISTNAME}
EPOCH=			1
REVISION =		0

CATEGORIES=		devel

HOMEPAGE=		https://github.com/prompt-toolkit/python-prompt-toolkit

# BSD
PERMIT_PACKAGE=	Yes

MODULES=		lang/python
MODPY_PI=		Yes
MODPY_SETUPTOOLS=	Yes
MODPY_PYTEST=		Yes
PORTHOME=		${WRKDIR}

RUN_DEPENDS=		devel/py-wcwidth${MODPY_FLAVOR} \
			textproc/py-pygments${MODPY_FLAVOR}

FLAVORS=		python3
FLAVOR =		python3

.include <bsd.port.mk>
