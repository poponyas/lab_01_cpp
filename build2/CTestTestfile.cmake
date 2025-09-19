# CMake generated Testfile for 
# Source directory: /workspace
# Build directory: /workspace/build2
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(MyProjectTests "/workspace/build2/tests")
set_tests_properties(MyProjectTests PROPERTIES  _BACKTRACE_TRIPLES "/workspace/CMakeLists.txt;39;add_test;/workspace/CMakeLists.txt;0;")
subdirs("_deps/googletest-build")
