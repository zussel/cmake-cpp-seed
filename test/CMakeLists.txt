ADD_EXECUTABLE(test_calc test_calc.cpp)

TARGET_LINK_LIBRARIES(test_calc calc)

ADD_TEST(all_test ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/test_calc)
