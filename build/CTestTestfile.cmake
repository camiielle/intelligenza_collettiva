# CMake generated Testfile for 
# Source directory: /home/camillalazzati/intelligenza_collettiva
# Build directory: /home/camillalazzati/intelligenza_collettiva/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(parameters.t "/home/camillalazzati/intelligenza_collettiva/build/parameters.t")
set_tests_properties(parameters.t PROPERTIES  _BACKTRACE_TRIPLES "/home/camillalazzati/intelligenza_collettiva/CMakeLists.txt;26;add_test;/home/camillalazzati/intelligenza_collettiva/CMakeLists.txt;0;")
add_test(boids.t "/home/camillalazzati/intelligenza_collettiva/build/boids.t")
set_tests_properties(boids.t PROPERTIES  _BACKTRACE_TRIPLES "/home/camillalazzati/intelligenza_collettiva/CMakeLists.txt;27;add_test;/home/camillalazzati/intelligenza_collettiva/CMakeLists.txt;0;")
add_test(flock.t "/home/camillalazzati/intelligenza_collettiva/build/flock.t")
set_tests_properties(flock.t PROPERTIES  _BACKTRACE_TRIPLES "/home/camillalazzati/intelligenza_collettiva/CMakeLists.txt;28;add_test;/home/camillalazzati/intelligenza_collettiva/CMakeLists.txt;0;")
subdirs("Lyra")
