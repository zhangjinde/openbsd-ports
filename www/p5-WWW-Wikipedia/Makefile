COMMENT=		automated interface to the Wikipedia encyclopedia

DISTNAME=		WWW-Wikipedia-2.05
CATEGORIES=		www
REVISION=		0

MAINTAINER=		Gleydson Soares <gsoares@openbsd.org>

MODULES=		cpan
PKG_ARCH=		*

# Perl
PERMIT_PACKAGE=	Yes

BUILD_DEPENDS=		${RUN_DEPENDS}
RUN_DEPENDS=		textproc/p5-Text-Autoformat \
			www/p5-LWP-Protocol-https \
			www/p5-libwww \
			www/p5-URI
TEST_DEPENDS=	devel/p5-Test-Exception
MAKE_ENV+=		TEST_POD=1

.include <bsd.port.mk>
