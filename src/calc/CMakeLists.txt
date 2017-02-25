SET(SOURCES
  calculator.cpp
)

SET(HEADER
  ${CMAKE_SOURCE_DIR}/include/calc/calculator.hpp
)

ADD_LIBRARY(calc SHARED ${SOURCES} ${HEADER})

# Set the build version (VERSION) and the API version (SOVERSION)
SET_TARGET_PROPERTIES(calc
                      PROPERTIES
                      VERSION ${APP_VERSION}
                      SOVERSION 0)

# For MSVC
SOURCE_GROUP("include\\calc" FILES ${HEADER})
SOURCE_GROUP("src\\calc" FILES ${SOURCES})

INSTALL(
  TARGETS calc
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  COMPONENT libraries
)

INSTALL(
  TARGETS calc
  DESTINATION lib
  COMPONENT libraries
)

INSTALL(
  FILES ${HEADER}
  DESTINATION include/calc
  COMPONENT headers
)
