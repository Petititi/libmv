# define the source files
SET(DESCRIPTOR_SRC daisy_descriptor.cc
                   simpliest_descriptor.cc
                   surf_descriptor.cc
                   dipole_descriptor.cc
                   descriptor_factory.cc)
               
# define the header files (make the headers appear in IDEs.)
FILE(GLOB DESCRIPTOR_HDRS *.h)

ADD_LIBRARY(descriptor ${LIB_TYPE} ${DESCRIPTOR_SRC} ${DESCRIPTOR_HDRS})

TARGET_LINK_LIBRARIES(descriptor detector image glog daisy)

# make the name of debug libraries end in _d.
SET_TARGET_PROPERTIES(descriptor PROPERTIES DEBUG_POSTFIX "_d")
# define LIBMV_SHOULD_EXPORT constant to export functions into DLL
SET_TARGET_PROPERTIES(descriptor PROPERTIES DEFINE_SYMBOL "LIBMV_SHOULD_EXPORT") 

LIBMV_INSTALL_LIB(descriptor)
LIBMV_TEST(daisy_descriptor "descriptor;image;daisy")
