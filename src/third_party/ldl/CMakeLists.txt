include_directories(../ufconfig)
include_directories(Include)
add_library(ldl ${LIB_TYPE} Source/ldl.c)
# define SHOULD_EXPORT constant to export functions into DLL
SET_TARGET_PROPERTIES(ldl PROPERTIES DEFINE_SYMBOL "ldl_SHOULD_EXPORT") 

LIBMV_INSTALL_THIRD_PARTY_LIB(ldl)
