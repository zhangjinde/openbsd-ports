COMMENT=	fast, safe and extensible Markdown to (X)HTML parser

DISTNAME=	redcarpet-3.5.1

CATEGORIES=	textproc

# MIT
PERMIT_PACKAGE=	Yes

MODULES=	lang/ruby

CONFIGURE_STYLE=ruby gem ext

TEST_DEPENDS =	${FULLPKGNAME}:${BUILD_PKGPATH}
MODRUBY_TEST=	ruby
MODRUBY_TEST_TARGET=	-I test -e 'ARGV.each{|f| require f}' \
			test/*_test.rb

SUBST_VARS=	RUBY

pre-configure:
	${SUBST_CMD} ${WRKSRC}/test/redcarpet_bin_test.rb

.include <bsd.port.mk>
