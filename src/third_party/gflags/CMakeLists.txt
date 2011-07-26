IF(WIN32)
  INCLUDE_DIRECTORIES(
    ../msinttypes
    ../pthreads-w32/include
  )
ENDIF(WIN32)

ADD_LIBRARY(gflags ${LIB_TYPE} gflags.cc gflags_reporting.cc gflags_completions.cc)
TARGET_LINK_LIBRARIES(gflags pthread)
# define SHOULD_EXPORT constant to export functions into DLL
SET_TARGET_PROPERTIES(gflags PROPERTIES DEFINE_SYMBOL "gflags_SHOULD_EXPORT") 

LIBMV_INSTALL_THIRD_PARTY_LIB(gflags)
