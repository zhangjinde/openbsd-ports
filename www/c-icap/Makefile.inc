CATEGORIES+=	www

HOMEPAGE?=	http://c-icap.sourceforge.net/

# LGPLv2.1+
PERMIT_PACKAGE?= Yes

MASTER_SITES?=	${MASTER_SITE_SOURCEFORGE:=c-icap/}

CONFIGURE_STYLE?= gnu

LIBTOOL_FLAGS=	--tag=disable-static
SYSCONFDIR=	${BASESYSCONFDIR}/c-icap

post-install:
	rm ${PREFIX}/lib/c_icap/*.la
