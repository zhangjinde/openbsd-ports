COMMENT =	perl module for spell-checking source code

DISTNAME =	Sourcecode-Spellchecker-0.03
REVISION =	1

CATEGORIES =	textproc devel

# Perl
PERMIT_PACKAGE =	Yes

MODULES =		cpan
PKG_ARCH =		*

CPAN_AUTHOR =		ZBLAIR

post-install:
	${INSTALL_SCRIPT} ${WRKSRC}/script/spellcheck_source.pl \
		${PREFIX}/bin/

.include <bsd.port.mk>
