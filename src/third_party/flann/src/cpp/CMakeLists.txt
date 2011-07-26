
INCLUDE_DIRECTORIES(algorithms util nn .)

SET(SOURCES flann.cpp util/Random.cpp nn/Testing.cpp algorithms/NNIndex.cpp algorithms/dist.cpp util/Logger.cpp)

ADD_LIBRARY(flann ${LIB_TYPE} ${SOURCES})
# define SHOULD_EXPORT constant to export functions into DLL
SET_TARGET_PROPERTIES(flann PROPERTIES DEFINE_SYMBOL "flann_SHOULD_EXPORT") 

LIBMV_INSTALL_THIRD_PARTY_LIB(flann)