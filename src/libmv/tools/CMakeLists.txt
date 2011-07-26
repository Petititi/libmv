# define the source files
SET(TOOLS_SRC ExifReader.cc)
               
# define the header files (make the headers appear in IDEs.)
FILE(GLOB TOOLS_HDRS *.h)

ADD_LIBRARY(tools ${LIB_TYPE} ${TOOLS_SRC} ${TOOLS_HDRS})

TARGET_LINK_LIBRARIES(tools)

# make the name of debug libraries end in _d.
SET_TARGET_PROPERTIES(tools PROPERTIES DEBUG_POSTFIX "_d")
# define LIBMV_SHOULD_EXPORT constant to export functions into DLL
SET_TARGET_PROPERTIES(tools PROPERTIES DEFINE_SYMBOL "LIBMV_SHOULD_EXPORT") 

# installation rules for the library
LIBMV_INSTALL_LIB(tools)