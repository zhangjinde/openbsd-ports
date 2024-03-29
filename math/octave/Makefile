COMMENT =	high-level language for numerical computations

VERSION =	5.2.0
DISTNAME =	octave-${VERSION}
REVISION =	5
CATEGORIES =	math

SHARED_LIBS +=	octave		13.0
SHARED_LIBS +=	octgui		7.0
SHARED_LIBS +=	octinterp	12.0

HOMEPAGE =	https://www.gnu.org/software/octave/

MAINTAINER =	Steven Mestdagh <steven@openbsd.org>

# GPLv3
PERMIT_PACKAGE =	Yes

MASTER_SITES =	${MASTER_SITE_GNU:=octave/}

MODULES =	fortran \
		x11/qt5

BUILD_DEPENDS =	${MODFORTRAN_BUILD_DEPENDS} \
		math/gnuplot \
		print/texinfo \
		textproc/gsed

MODFORTRAN_COMPILER =	gfortran

# configure checks for desktop-file-install(1)
BUILD_DEPENDS +=devel/desktop-file-utils

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gtk+3,-guic

LIB_DEPENDS =	${MODFORTRAN_LIB_DEPENDS} \
		audio/libsndfile \
		audio/portaudio-svn \
		devel/glpk \
		devel/pcre \
		devel/readline \
		editors/qscintilla \
		graphics/GraphicsMagick \
		math/arpack \
		math/fftw3 \
		math/fftw3,float \
		math/hdf5 \
		math/qhull \
		math/qrupdate \
		math/suitesparse \
		net/curl \
		print/gl2ps \
		x11/qt5/qttools,-main

WANTLIB += ${MODFORTRAN_WANTLIB}
WANTLIB += FLAC GL GLU GraphicsMagick GraphicsMagick++ ICE
WANTLIB += Qt5Gui Qt5Network Qt5OpenGL Qt5PrintSupport Qt5Widgets Qt5Core
WANTLIB += Qt5Help Qt5Xml Qt5Sql qscintilla2_qt5 SM X11 X11-xcb Xdamage
WANTLIB += Xext Xfixes Xi Xmu Xrandr Xrender Xt Xxf86vm amd
WANTLIB += arpack blas bz2 c camd ccolamd cholmod colamd crypto curl
WANTLIB += curses cxsparse double-conversion drm ereadline expat
WANTLIB += execinfo fftw3 fftw3_threads fftw3f fftw3f_threads
WANTLIB += fontconfig freetype gl2ps glapi glpk glut
WANTLIB += glib-2.0 graphite2 gthread-2.0 harfbuzz icudata icuio
WANTLIB += gmp hdf5 iconv icui18n icuuc intl lapack lcms2 ltdl lzma
WANTLIB += m nghttp2 ogg pcre pcre2-16 png portaudio pthread qhull
WANTLIB += qrupdate sndfile sndio ssl ${COMPILER_LIBCXX} suitesparseconfig
WANTLIB += umfpack util vorbis vorbisenc xcb xcb-dri2 xcb-dri3 xcb-glx
WANTLIB += xcb-present xcb-sync xcb-xfixes xshmfence z zstd
WANTLIB += Xau Xdmcp opus xcb-shm


SEPARATE_BUILD =	Yes
USE_GMAKE =		Yes
CONFIGURE_STYLE =	gnu
# --disable-readline: needs GNU readline
CONFIGURE_ARGS	=	--disable-java \
			--without-fltk \
			octave_cv_version_2_6_0=yes
CONFIGURE_ENV =	CPPFLAGS="-I${LOCALBASE}/include -I${X11BASE}/include \
		-I${LOCALBASE}/include/ereadline" \
		LDFLAGS="-L${LOCALBASE}/lib -L${X11BASE}/lib" \
		LRELEASE="${MODQT_LRELEASE}" \
		CFLAGS="${CFLAGS} -std=gnu11" \
		CXXFLAGS="${CXXFLAGS} -std=gnu++11" \
		QCOLLECTIONGENERATOR_QTVER=${LOCALBASE}/lib/qt5/bin/qcollectiongenerator \
		QHELPGENERATOR=${LOCALBASE}/lib/qt5/bin/qhelpgenerator

# needed to build on amd64
GCC_ARCH =	${MACHINE_ARCH}-unknown-openbsd${OSREV}
GNU_ARCH =	${GCC_ARCH:S/amd64/x86_64/}
SUBST_VARS =	GNU_ARCH VERSION

post-extract:
.for i in makeinfo texi2dvi texi2pdf
	ln -s ${LOCALBASE}/bin/g$i ${WRKDIR}/bin/$i
.endfor

.include <bsd.port.mk>
