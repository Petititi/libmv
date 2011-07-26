include_directories(../ufconfig)
include_directories(Include)
add_library(colamd ${LIB_TYPE} Source/colamd.c Source/colamd_global.c)
# define SHOULD_EXPORT constant to export functions into DLL
SET_TARGET_PROPERTIES(colamd PROPERTIES DEFINE_SYMBOL "colamd_SHOULD_EXPORT") 

LIBMV_INSTALL_THIRD_PARTY_LIB(colamd)