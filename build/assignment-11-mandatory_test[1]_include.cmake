if(EXISTS "/Users/andrebrahin/Downloads/assignment-11-mandatory-files/build/assignment-11-mandatory_test[1]_tests.cmake")
  include("/Users/andrebrahin/Downloads/assignment-11-mandatory-files/build/assignment-11-mandatory_test[1]_tests.cmake")
else()
  add_test(assignment-11-mandatory_test_NOT_BUILT assignment-11-mandatory_test_NOT_BUILT)
endif()
