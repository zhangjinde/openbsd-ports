COMMENT=		extract elements from a JSON document

MODPY_EGG_VERSION=	0.10.0
DISTNAME=		jmespath-${MODPY_EGG_VERSION}
PKGNAME=		py-${DISTNAME}
REVISION=		2

CATEGORIES=		devel

HOMEPAGE=		https://github.com/jmespath/jmespath.py

# MIT
PERMIT_PACKAGE=	Yes

MODULES=		lang/python

MODPY_PI=		Yes
MODPY_SETUPTOOLS=	Yes

FLAVORS=		python3
FLAVOR =	python3

post-install:
	rm ${PREFIX}/bin/jp.py

.include <bsd.port.mk>
