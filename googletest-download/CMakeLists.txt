cmake_minimum_required(VERSION 3.15)

project(googletest-download NONE)

include(ExternalProject)
ExternalProject_Add(googletest
  GIT_REPOSITORY    https://github.com/google/googletest.git
  GIT_TAG           main
  SOURCE_DIR        "/class/classes/cchua042/lab-06-code-coverage-bli181-cchua042/googletest-src"
  BINARY_DIR        "/class/classes/cchua042/lab-06-code-coverage-bli181-cchua042/googletest-build"
  CONFIGURE_COMMAND ""
  BUILD_COMMAND     ""
  INSTALL_COMMAND   ""
  TEST_COMMAND      ""
)
