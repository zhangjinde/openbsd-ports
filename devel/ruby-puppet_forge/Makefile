COMMENT =	tools to access the Puppet Forge API

DISTNAME =	puppet_forge-2.3.4
REVISION =	0
CATEGORIES =	devel
HOMEPAGE =	https://github.com/puppetlabs/forge-ruby
MAINTAINER =	Sebastian Reitenbach <sebastia@openbsd.org>

# Apache 2.0
PERMIT_PACKAGE =	Yes

MODULES =		lang/ruby
BUILD_DEPENDS +=	${RUN_DEPENDS}
RUN_DEPENDS +=	archivers/ruby-minitar,${MODRUBY_FLAVOR} \
		devel/ruby-gettext-setup,${MODRUBY_FLAVOR}>=0.11,<1 \
		devel/ruby-semantic_puppet,${MODRUBY_FLAVOR}>=1.0,<2.0 \
		www/ruby-faraday,${MODRUBY_FLAVOR}>=0.14,<0.18 \
		www/ruby-faraday_middleware,${MODRUBY_FLAVOR}>=0.9.0,<0.15

CONFIGURE_STYLE =	ruby gem

MODRUBY_TEST =		rspec3

.include <bsd.port.mk>
