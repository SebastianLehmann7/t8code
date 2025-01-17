/* src/pre_config.h.  Generated from pre_config.h.in by configure.  */
/* src/pre_config.h.in.  Generated from configure.ac by autoheader.  */

/* C compiler */
#define CC "mpicc"

/* C compiler flags */
#define CFLAGS "-Wall -g -O0"

/* C preprocessor */
#define CPP "mpicc -E"

/* C preprocessor flags */
#define CPPFLAGS ""

/* DEPRECATED (use T8_ENABLE_CPPSTD instead) */
#define CPPSTD 1

/* Define to 1 if your C++ compiler doesn't accept -c and -o together. */
/* #undef CXX_NO_MINUS_C_MINUS_O */

/* DEPRECATED (use P4EST_ENABLE_DEBUG instead) */
#define DEBUG 1

/* Undefine if: c++ standard library (optionally use
   --enable-cppstd=<CPP_LIBS>) */
#define ENABLE_CPPSTD 1

/* enable debug mode (assertions and extra checks) */
#define ENABLE_DEBUG 1

/* Undefine if: use aligned malloc (optionally use --enable-memalign=<bytes>)
   */
#define ENABLE_MEMALIGN 1

/* Define to 1 if we are using MPI */
#define ENABLE_MPI 1

/* Define to 1 if we can use MPI_COMM_TYPE_SHARED */
#define ENABLE_MPICOMMSHARED 1

/* Define to 1 if we are using MPI I/O */
#define ENABLE_MPIIO 1

/* Define to 1 if we are using MPI_Init_thread */
#define ENABLE_MPITHREAD 1

/* Define to 1 if we can use MPI_Win_allocate_shared */
#define ENABLE_MPIWINSHARED 1

/* enable OpenMP (optionally use --enable-openmp=<OPENMP_CFLAGS>) */
/* #undef ENABLE_OPENMP */

/* enable POSIX threads (optionally use --enable-pthread=<PTHREAD_CFLAGS>) */
/* #undef ENABLE_PTHREAD */

/* Define to dummy `main' function (if any) required to link to the Fortran
   libraries. */
/* #undef F77_DUMMY_MAIN */

/* Define to a macro mangling the given C identifier (in lower and upper
   case), which must not contain underscores, for linking with Fortran. */
#define F77_FUNC(name,NAME) name ## _

/* As F77_FUNC, but for C identifiers containing underscores. */
#define F77_FUNC_(name,NAME) name ## _

/* Define to 1 if your Fortran compiler doesn't accept -c and -o together. */
/* #undef F77_NO_MINUS_C_MINUS_O */

/* Define to dummy `main' function (if any) required to link to the Fortran
   libraries. */
/* #undef FC_DUMMY_MAIN */

/* Define if F77 and FC dummy `main' functions are identical. */
/* #undef FC_DUMMY_MAIN_EQ_F77 */

/* Define to a macro mangling the given C identifier (in lower and upper
   case), which must not contain underscores, for linking with Fortran. */
#define FC_FUNC(name,NAME) name ## _

/* As FC_FUNC, but for C identifiers containing underscores. */
#define FC_FUNC_(name,NAME) name ## _

/* Define to 1 if your Fortran compiler doesn't accept -c and -o together. */
/* #undef FC_NO_MINUS_C_MINUS_O */

/* Define to 1 if you have the `aligned_alloc' function. */
#define HAVE_ALIGNED_ALLOC 1

/* Have we found function new. */
/* #undef HAVE_CPPSTD */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Have we found function pthread_create. */
#define HAVE_LPTHREAD 1

/* Have we found function lua_createtable. */
/* #undef HAVE_LUA */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Have we found function omp_get_thread_num. */
#define HAVE_OPENMP 1

/* Define to 1 if you have the `posix_memalign' function. */
#define HAVE_POSIX_MEMALIGN 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Have we found function adler32_combine. */
#define HAVE_ZLIB 1

/* Linker flags */
#define LDFLAGS ""

/* Libraries */
#define LIBS "-lgomp -lpthread   -lz -lm    -lstdc++"

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* DEPRECATED (use T8_ENABLE_MEMALIGN instead) */
#define MEMALIGN 1

/* desired alignment of allocations in bytes */
#define MEMALIGN_BYTES (T8_SIZEOF_VOID_P)

/* DEPRECATED (use T8_WITH_METIS instead) */
/* #undef METIS */

/* DEPRECATED (use T8_ENABLE_MPI instead) */
#define MPI 1

/* DEPRECATED (use T8_ENABLE_MPIIO instead) */
#define MPIIO 1

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* DEPRECATED (use T8_ENABLE_OPENMP instead) */
/* #undef OPENMP */

/* DEPRECATED (use T8_WITH_P4EST instead) */
/* #undef P4EST */

/* Name of package */
#define PACKAGE "t8"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "burstedde@ins.uni-bonn.de"

/* Define to the full name of this package. */
#define PACKAGE_NAME "t8"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "t8 0.3.311-fe06-dirty"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "t8"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.3.311-fe06-dirty"

/* DEPRECATED (use T8_WITH_PETSC instead) */
/* #undef PETSC */

/* Use builtin getopt */
/* #undef PROVIDE_GETOPT */

/* Use builtin obstack */
/* #undef PROVIDE_OBSTACK */

/* DEPRECATED (use T8_ENABLE_PTHREAD instead) */
/* #undef PTHREAD */

/* DEPRECATED (use T8_WITH_SC instead) */
/* #undef SC */

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "0.3.311-fe06-dirty"

/* Package major version */
#define VERSION_MAJOR 0

/* Package minor version */
#define VERSION_MINOR 3

/* Package point version */
#define VERSION_POINT 311-fe06-dirty

/* Define to 1 if BLAS is used */
/* #undef WITH_BLAS */

/* Define to 1 if LAPACK is used */
/* #undef WITH_LAPACK */

/* enable metis-dependent code */
/* #undef WITH_METIS */

/* path to installed package p4est (optional) */
/* #undef WITH_P4EST */

/* enable PETSc-dependent code */
/* #undef WITH_PETSC */

/* path to installed package sc (optional) */
/* #undef WITH_SC */
