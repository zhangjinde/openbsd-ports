COMMENT=		interface to XML based eBay API

DISTNAME =		Net-eBay-0.61
CATEGORIES=		net
REVISION =		1

# perl
PERMIT_PACKAGE=	Yes

MODULES=		cpan
PKG_ARCH=		*
MODCPAN_EXAMPLES=	Yes

RUN_DEPENDS=		devel/p5-DateTime-Precise \
			security/p5-Crypt-SSLeay \
			security/p5-Net-SSLeay \
			textproc/p5-Text-Format \
			textproc/p5-XML-Dumper \
			textproc/p5-XML-Simple \
			www/p5-HTML-Format \
			www/p5-HTML-PrettyPrinter \
			www/p5-HTML-Tree \
			www/p5-libwww

# Help MODCPAN_EXAMPLES a bit.
post-extract:
	@cd ${WRKSRC} && mkdir examples/ && mv ebay-*.pl examples/

.include <bsd.port.mk>
