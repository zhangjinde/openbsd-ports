COMMENT=	(E)nhanced (P)rogrammable (I)RC-II (C)lient

VERSION=	2.10.5
REVISION=	3
HELP_DATE=	20050315
DISTNAME=	epic4-${VERSION}
CATEGORIES=	net
MASTER_SITES=	http://ftp.epicsol.org/pub/epic/EPIC4-PRODUCTION/
DISTFILES=	epic4-${VERSION}.tar.bz2 epic4-help-${HELP_DATE}.tar.bz2

HOMEPAGE=	http://www.epicsol.org/

# BSD
PERMIT_PACKAGE=	Yes

WANTLIB=	c crypto m curses perl pthread ssl

FAKE_FLAGS=	INSTALL_PROGRAM="${INSTALL_PROGRAM}" \
		INSTALL_DATA="${INSTALL_DATA}"

SEPARATE_BUILD=	Yes
CONFIGURE_STYLE= gnu
CONFIGURE_ARGS=	--without-tcl \
		--enable-perl
# conflict between Perl embed headers and uvm_map's {max,min}_offset defines.
CONFIGURE_ENV=	ac_cv_header_sys_sysctl_h=no

INSTALL_TARGET=	install installhelp

NO_TEST=	Yes

SUBST_VARS=	VERSION

post-extract:
	@mv -f ${WRKDIR}/help ${WRKSRC}
	@find ${WRKSRC}/help -name CVS -prune -exec rm -rf {} +

.include <bsd.port.mk>
