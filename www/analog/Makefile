COMMENT=	extremely fast program for analysing WWW logfiles

GH_ACCOUNT=	c-amie
GH_PROJECT=	analog-ce
GH_TAGNAME=	6.0.17
DISTNAME=	analog-${GH_TAGNAME}

CATEGORIES=	www

HOMEPAGE=	https://www.c-amie.co.uk/software/analog/

# GPLv2 only
PERMIT_PACKAGE=	Yes

WANTLIB += c iconv m jpeg png z gd pcre

LIB_DEPENDS=	converters/libiconv \
		graphics/gd \
		devel/pcre

ANALOGDIR=	${PREFIX}/share/analog
CONFIGFILE=	${SYSCONFDIR}/analog.cfg
DOCDIR=		${PREFIX}/share/doc/analog
HTTPDIR=	${VARBASE}/www
IMAGEDIR=	/analog-images

CFLAGS+=	-I${LOCALBASE}/include \
		-DANALOGDIR=\"${ANALOGDIR}/\" \
		-DDEFAULTCONFIGFILE=\"${CONFIGFILE}\" \
		-DHTTPDIR=\"${HTTPDIR}/\" \
		-DIMAGEDIR=\"${IMAGEDIR}/\" \
		-DLANGDIR=\"${ANALOGDIR}/lang/\" \
		-DANALOG=\"${PREFIX}/bin/analog\" \
		-DHAVE_GD -DHAVE_ZLIB -DHAVE_PCRE -DHAVE_ADDR_T

ALL_TARGET=	analog
MAKE_FLAGS=	CC='${CC}' CFLAGS='${CFLAGS}' \
		LIBS="-L${LOCALBASE}/lib -L${X11BASE}/lib -lgd -lpng -lm -ljpeg -lz -lpcre -liconv"

NO_TEST=	Yes

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/{doc,examples}/analog \
	    ${ANALOGDIR}/lang ${ANALOGDIR}/images
	${INSTALL_PROGRAM} ${WRKBUILD}/analog ${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/docs/* ${PREFIX}/share/doc/analog
	${INSTALL_DATA} ${WRKSRC}/examples/*.cfg \
	    ${PREFIX}/share/examples/analog
	${INSTALL_DATA} ${WRKSRC}/images/* ${ANALOGDIR}/images
	${INSTALL_DATA} ${WRKSRC}/lang/* ${ANALOGDIR}/lang
	cd ${WRKSRC} && ${INSTALL_DATA} anlgform.html anlgform.pl \
	    ${ANALOGDIR}
	${INSTALL_MAN} ${WRKSRC}/analog.man ${PREFIX}/man/man1/analog.1

.include <bsd.port.mk>
