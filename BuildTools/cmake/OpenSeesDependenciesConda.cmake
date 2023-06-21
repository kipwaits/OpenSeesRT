#==============================================================================
# 
#        OpenSees -- Open System For Earthquake Engineering Simulation
#                Pacific Earthquake Engineering Research Center
#
#==============================================================================
#                             External Libraries
#
#==============================================================================



















# Synopsis
# - opensees_load(<PACKAGE> [BUILD|FIND|SEARCH|PATHS] [<PATHS>])
#
# Options:
# - BUILD:  Build OpenSees provided library
# - FIND:   Use CMake to find library, fail if not found
# - SEARCH: Try finding library with CMake, build OpenSees
#           Version if not found.
# - PATHS:  Provide specific paths for library.
#
#==============================================================================
set(CONDA_DIR "C:/Users/claud/miniconda3")
set(CONDA_ENV "C:/Users/claud/miniconda3/envs/sim")

opensees_load(TCL                                          FIND
  #LIBRARY ${CONDA_DIR}/Library/lib/tcl86t.lib
  #INCLUDE ${CONDA_DIR}/Library/include 
)

find_package(TCL)
find_package(TclStub)
set(TCL_INCLUDE_PATH ${TCL_INCLUDE_DIRS})
#set(TCL_LIBRARY ${TCL_LIBRARIES})


message("TCL: ${TCL_INCLUDE_PATH}")

opensees_load(BLAS                                         FIND
  #LIBRARY ${CONDA_ENV}/Library/lib/blas.lib
  #INCLUDE ${CONDA_ENV}/Library/include/
)

# opensees_load(CBLAS                                         FIND
#   #LIBRARY ${CONDA_ENV}/Library/lib/cblas.lib
#   #INCLUDE ${CONDA_ENV}/Library/include/
# )

opensees_load(LAPACK                                       FIND
  LIBRARY ${CONDA_PREFIX}/lib/liblapack.so
  #LIBRARY ${CONDA_ENV}/Library/lib/lapack.lib
)

set(ENV{SUPERLU_DIR})
opensees_load(SUPERLU                                       #SEARCH
    BUNDLED ${OPS_BUNDLED_DIR}/SuperLU_5.1.1/
)


opensees_load(METIS                                        SEARCH)

opensees_load(HDF5                                           FIND)

# opensees_load(MySQL                                          FIND
#   #LIBRARY ${CONDA_ENV}/Library/lib/libmysql.lib
#   #INCLUDE ${CONDA_ENV}/Library/include/mysql
# )

# set(MYSQL_INCLUDE_DIR "${CONDA_ENV}/Library/include/mysql/")

