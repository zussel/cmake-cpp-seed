CONFIGURE_FILE (${CMAKE_SOURCE_DIR}/include/calc/version.hpp.in ${CMAKE_BINARY_DIR}/version.hpp)

ADD_SUBDIRECTORY(calc)

INSTALL(
  FILES ${CMAKE_BINARY_DIR}/version.hpp
  DESTINATION include/calc
  COMPONENT headers
)
