COMMENT=	PHP support for the ImageMagick library

DISTNAME=	imagick-3.7.0
CATEGORIES=	graphics
REVISION=	0

# PHP
PERMIT_PACKAGE=	Yes

WANTLIB += ICE MagickCore-6.Q16 MagickWand-6.Q16 SM X11 Xext Xt
WANTLIB += aom bz2 dav1d de265 djvulibre expat fftw3 fontconfig
WANTLIB += freetype heif iconv jasper jbig jpeg lcms2 lzma m openjp2
WANTLIB += png pthread raw_r tiff webp webpdemux webpmux x265
WANTLIB += xcb xml2 z zstd

MODULES=	lang/php/pecl
CONFIGURE_STYLE= gnu

LIB_DEPENDS=	converters/libiconv \
		graphics/ImageMagick
CONFIGURE_ENV+=	CPPFLAGS=-I${LOCALBASE}/include

# php headers pull in pcre2.h
BUILD_DEPENDS+=	devel/pcre2

.include <bsd.port.mk>
