COMMENT =		high-level IO library for Ruby

DISTNAME =		highline-1.6.21
REVISION =		0
CATEGORIES =		devel

HOMEPAGE =		https://github.com/JEG2/highline

# Ruby license
PERMIT_PACKAGE = Yes

MODULES =		lang/ruby

CONFIGURE_STYLE =	ruby gem

MODRUBY_TEST=		testrb
MODRUBY_TEST_TARGET =	-I lib test/*.rb

post-install:
	@find ${PREFIX}/${GEM_LIB}/ -type f \( -name \*.gitignore \
		-o -name \*.cvsignore -o -name Rakefile \
		-o -name setup.rb \) -delete
	@rmdir ${PREFIX}/${GEM_LIB}/gems/${DISTNAME}/doc

.include <bsd.port.mk>
