cmake_minimum_required(VERSION 3.0.0)
project(BBMS VERSION 0.1.0)

# include(CTest)
# enable_testing()

add_executable(BBMS main.cpp admin.cpp hospital.cpp user.cpp)
target_compile_features(BBMS PRIVATE cxx_std_17)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
