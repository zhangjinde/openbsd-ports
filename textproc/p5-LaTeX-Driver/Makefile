COMMENT =	driver to format LaTeX documents

DISTNAME =	LaTeX-Driver-1.2.0
CATEGORIES =	textproc

MODULES =	cpan
PKG_ARCH =	*

MAINTAINER =	Andrew Hewus Fresh <afresh1@openbsd.org>

# Perl
PERMIT_PACKAGE =	Yes

RUN_DEPENDS =	print/texlive/base \
		devel/p5-Class-Accessor>=0 \
		devel/p5-Exception-Class>=0 \
		devel/p5-File-Slurp>=0 \
		devel/p5-File-pushd>=0 \
		devel/p5-Log-Any \
		devel/p5-Readonly>=0

TEST_DEPENDS =	devel/p5-Test-Exception \
		print/texlive/texmf,-full \
		sysutils/p5-Capture-Tiny

.include <bsd.port.mk>
