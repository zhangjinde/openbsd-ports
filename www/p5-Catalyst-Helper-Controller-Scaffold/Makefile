COMMENT=		catalyst helper for CRUD scaffolding

MODULES=		cpan
PKG_ARCH=		*
DISTNAME=		Catalyst-Helper-Controller-Scaffold-0.04
REVISION=		1
CATEGORIES=		devel www

# same as perl
PERMIT_PACKAGE=	Yes

RUN_DEPENDS=		databases/p5-Class-DBI-AsForm \
			www/p5-Catalyst-Plugin-FormValidator \
			databases/p5-Class-DBI-FromForm \
			textproc/p5-Template-Plugin-Class \
			textproc/p5-Catalyst-View-TT

MAKE_ENV=		TEST_POD=Yes

.include <bsd.port.mk>
