COMMENT =	Puppet module management

DISTNAME =	r10k-3.14.2
CATEGORIES =	sysutils
HOMEPAGE =	https://github.com/puppetlabs/r10k
MAINTAINER =	Sebastian Reitenbach <sebastia@openbsd.org>

# Apache 2.0
PERMIT_PACKAGE =	Yes

MODULES =		lang/ruby

BUILD_DEPENDS +=	${RUN_DEPENDS}
RUN_DEPENDS += converters/ruby-multi_json,${MODRUBY_FLAVOR}>=1.10,<2 \
		devel/ruby-colored2,${MODRUBY_FLAVOR}=3.1.2 \
		devel/ruby-cri,${MODRUBY_FLAVOR}>=2.15.10,<2.16 \
		devel/ruby-gettext,${MODRUBY_FLAVOR}>=3.0.2,<3.3.0 \
		devel/ruby-gettext-setup,${MODRUBY_FLAVOR}>=0.24,<1 \
		devel/ruby-log4r,${MODRUBY_FLAVOR}>=1.1.10,<1.2 \
		devel/ruby-puppet_forge,${MODRUBY_FLAVOR}>=2.3.0,<3 \
		www/ruby-jwt,${MODRUBY_FLAVOR}>=2.2.3,<2.3

CONFIGURE_STYLE =	ruby gem

.include <bsd.port.mk>
