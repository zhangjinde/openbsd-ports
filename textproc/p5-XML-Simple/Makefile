COMMENT=	trivial perl API for reading/writing XML

MODULES=	cpan
PKG_ARCH=	*

DISTNAME=	XML-Simple-2.25
REVISION=	0

CATEGORIES=	textproc

# GPL/Artistic
PERMIT_PACKAGE=	Yes

RUN_DEPENDS=	textproc/p5-XML-NamespaceSupport>=1.04 \
		textproc/p5-XML-SAX-Expat \
		textproc/p5-XML-SAX>=0.15

MAKE_ENV+=	TEST_POD=Yes AUTHOR_TESTING=Yes

.include <bsd.port.mk>
