/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Atlas for matrix multiplication */
/* #undef HAVE_ATLAS */

/* If a matrix multiplication library exists */
/* #undef HAVE_BLAS */

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* OpenBLAS for matrix multiplication */
/* #undef HAVE_OPENBLAS */

/* Intel MKL for matrix multiplication */
/* #undef HAVE_MKL_H */

/* Have a vector exponential function */
/* #undef HAVE_VECTOR_EXP */

/* Number of values simulator will generate before modifying lambda value */
#define LAMBDA_PERTURBATION_STEP_SIZE 1

/* Number of times optimizer will restart if it fails to find legal values */
#define NUM_OPTIMIZER_INITIALIZATION_ATTEMPTS 100

/* Precision of values optimizer will use before abandoning a set of values */
#define OPTIMIZER_HIGH_PRECISION 1e-6

/* Precision of values optimizer will use before abandoning a set of values */
#define OPTIMIZER_LOW_PRECISION 1e-3

/* Optimizer will stop after 12 iterations with no significant change in -ln
   likelihood */
#define OPTIMIZER_STRATEGY_SIMILARITY_CUTOFF 15

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "cafe5"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "cafe5 1.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "cafe5"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.1"

/* Number of attempts optimizer will make to initialize to a good value */
#define PHASED_OPTIMIZER_PHASE1_ATTEMPTS 4

/* Maximum family size to analyze before dropping to allocating heap memory */
#define MAX_STACK_FAMILY_SIZE 1000

#define ELPP_NO_CHECK_MACROS

