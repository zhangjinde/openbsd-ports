COMMENT =		open source MPI-3.1 implementation

V =			4.1.2
DISTNAME =		openmpi-$V
REVISION =		0

SHARED_LIBS +=  open-pal		6.0 # 70.2
SHARED_LIBS +=  mca_common_sm		3.0 # 70.0
SHARED_LIBS +=  mca_common_dstore	1.0 # 1.2
SHARED_LIBS +=  open-rte		6.0 # 70.2
SHARED_LIBS +=  mpi			6.0 # 70.2
SHARED_LIBS +=  mpi_mpifh		1.0 # 70.0
SHARED_LIBS +=  mpi_usempi_ignore_tkr	1.0 # 70.0
SHARED_LIBS +=  mpi_usempif08		3.0 # 70.0
SHARED_LIBS +=  mca_common_monitoring	1.0 # 70.0
SHARED_LIBS +=  mca_common_ompio	3.0 # 70.2
SHARED_LIBS +=  ompitrace		1.0 # 70.0

CATEGORIES =		devel

HOMEPAGE =		https://www.open-mpi.org/

MAINTAINER = 		Martin Reindl <martin@catai.org>

# BSD
PERMIT_PACKAGE =	Yes

WANTLIB += c execinfo m pciaccess pthread util z

MASTER_SITES =		${HOMEPAGE}/software/ompi/v${V:C/^([0-9]+\.[0-9]+).*/\1/}/downloads/

COMPILER =		ports-gcc

# MODULES=fortran always uses ports-gcc (and overrides COMPILER)
# the openmpi applications and libraries will be built with ports-gcc, but
# are compatible with base-clang on archs where it is available
MODULES =		fortran
MODFORTRAN_COMPILER =	gfortran
BUILD_DEPENDS =		devel/libtool,-ltdl

CONFIGURE_ARGS +=	--enable-mpi-fortran=usempif08 \
			--enable-mca-no-build=op-avx \
			FC=egfortran \
			CC=egcc

MAKE_FLAGS =		V=1
FAKE_FLAGS =		sysconfdir=${PREFIX}/share/examples/openmpi/
CONFIGURE_STYLE =	gnu
SEPARATE_BUILD = 	Yes

.include <bsd.port.mk>
