COMMENT =	cache the output of entire pages

MODULES =	cpan
PKG_ARCH =	*
DISTNAME =	Catalyst-Plugin-PageCache-0.32
CATEGORIES =	www
FIX_EXTRACT_PERMISSIONS=Yes

# Perl
PERMIT_PACKAGE =	Yes

RUN_DEPENDS =	www/p5-Catalyst-Runtime \
		www/p5-Catalyst-Plugin-Cache>=0.10 \
		security/p5-Digest-SHA1 \
		devel/p5-MRO-Compat
TEST_DEPENDS =	devel/p5-Cache-Cache \
			www/p5-Catalyst-Plugin-I18N

# Optional test dependency
TEST_DEPENDS +=	devel/p5-DateTime

CONFIGURE_STYLE =	modinst

.include <bsd.port.mk>
