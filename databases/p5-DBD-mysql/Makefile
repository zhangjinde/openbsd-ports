COMMENT=		MySQL drivers for the Perl DBI
DISTNAME=		DBD-mysql-4.050
REVISION=		1

CATEGORIES=		databases

MAINTAINER=		Giovanni Bechis <giovanni@openbsd.org>

MODULES=		cpan databases/mariadb
CPAN_AUTHOR=		DVEEDEN

# Perl
PERMIT_PACKAGE=	Yes

WANTLIB=		c crypto m mariadb perl pthread ssl z

BUILD_DEPENDS=		databases/p5-DBI>=1.08 \
			devel/p5-Devel-CheckLib
RUN_DEPENDS=		databases/p5-DBI>=1.08
LIB_DEPENDS=		databases/mariadb
TEST_DEPENDS=		databases/mariadb,-server \
			devel/p5-Test-Deep \
			sysutils/p5-Proc-ProcessTable
TEST_ENV=		EXTENDED_TESTING=1

.include <bsd.port.mk>
