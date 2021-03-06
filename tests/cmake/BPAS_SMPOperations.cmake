
if( (NOT BPAS_WITH_MAPLE) OR BPAS_BUILD_SERIAL ) 


BPAS_ADD_SANITY_TEST(SMQP_test1 SMQP_test_exe FILES 
	${CMAKE_CURRENT_SOURCE_DIR}/SMPOperations/test.cpp
	ARGUMENTS 0 1
)
BPAS_ADD_SANITY_TEST(SMQP_test2 SMQP_test_exe FILES 
	${CMAKE_CURRENT_SOURCE_DIR}/SMPOperations/test.cpp
	ARGUMENTS 1 1
)
BPAS_ADD_SANITY_TEST(SMQP_test3 SMQP_test_exe FILES 
	${CMAKE_CURRENT_SOURCE_DIR}/SMPOperations/test.cpp
	ARGUMENTS 1 10
)
BPAS_ADD_SANITY_TEST(SMQP_test4 SMQP_test_exe FILES 
	${CMAKE_CURRENT_SOURCE_DIR}/SMPOperations/test.cpp
	ARGUMENTS 3 1
)
BPAS_ADD_SANITY_TEST(SMQP_test5 SMQP_test_exe FILES 
	${CMAKE_CURRENT_SOURCE_DIR}/SMPOperations/test.cpp
	ARGUMENTS 3 10
)

BPAS_ADD_SANITY_TEST(SMZP_test1 SMZP_test_exe FILES 
	${CMAKE_CURRENT_SOURCE_DIR}/SMPOperations/test-mz.cpp
	ARGUMENTS 0 1
)
BPAS_ADD_SANITY_TEST(SMZP_test2 SMZP_test_exe FILES 
	${CMAKE_CURRENT_SOURCE_DIR}/SMPOperations/test-mz.cpp
	ARGUMENTS 1 1
)
BPAS_ADD_SANITY_TEST(SMZP_test3 SMZP_test_exe FILES 
	${CMAKE_CURRENT_SOURCE_DIR}/SMPOperations/test-mz.cpp
	ARGUMENTS 1 10
)
BPAS_ADD_SANITY_TEST(SMZP_test4 SMZP_test_exe FILES 
	${CMAKE_CURRENT_SOURCE_DIR}/SMPOperations/test-mz.cpp
	ARGUMENTS 3 1
)
BPAS_ADD_SANITY_TEST(SMZP_test5 SMZP_test_exe FILES 
	${CMAKE_CURRENT_SOURCE_DIR}/SMPOperations/test-mz.cpp
	ARGUMENTS 3 10
)

endif()


BPAS_ADD_VALIDATE_TEST(SMQP_test1 SMQP_vtest_exe FILES 
	${CMAKE_CURRENT_SOURCE_DIR}/SMPOperations/test.cpp
	ARGUMENTS 0 1
)
BPAS_ADD_VALIDATE_TEST(SMQP_test2 SMQP_vtest_exe FILES 
	${CMAKE_CURRENT_SOURCE_DIR}/SMPOperations/test.cpp
	ARGUMENTS 1 1
)
BPAS_ADD_VALIDATE_TEST(SMQP_test3 SMQP_vtest_exe FILES 
	${CMAKE_CURRENT_SOURCE_DIR}/SMPOperations/test.cpp
	ARGUMENTS 1 10
)
BPAS_ADD_VALIDATE_TEST(SMQP_test4 SMQP_vtest_exe FILES 
	${CMAKE_CURRENT_SOURCE_DIR}/SMPOperations/test.cpp
	ARGUMENTS 3 1
)
BPAS_ADD_VALIDATE_TEST(SMQP_test5 SMQP_vtest_exe FILES 
	${CMAKE_CURRENT_SOURCE_DIR}/SMPOperations/test.cpp
	ARGUMENTS 3 10
)

BPAS_ADD_VALIDATE_TEST(SMZP_test1 SMZP_vtest_exe FILES 
	${CMAKE_CURRENT_SOURCE_DIR}/SMPOperations/test-mz.cpp
	ARGUMENTS 0 1
)
BPAS_ADD_VALIDATE_TEST(SMZP_test2 SMZP_vtest_exe FILES 
	${CMAKE_CURRENT_SOURCE_DIR}/SMPOperations/test-mz.cpp
	ARGUMENTS 1 1
)
BPAS_ADD_VALIDATE_TEST(SMZP_test3 SMZP_vtest_exe FILES 
	${CMAKE_CURRENT_SOURCE_DIR}/SMPOperations/test-mz.cpp
	ARGUMENTS 1 10
)
BPAS_ADD_VALIDATE_TEST(SMZP_test4 SMZP_vtest_exe FILES 
	${CMAKE_CURRENT_SOURCE_DIR}/SMPOperations/test-mz.cpp
	ARGUMENTS 3 1
)
BPAS_ADD_VALIDATE_TEST(SMZP_test5 SMZP_vtest_exe FILES 
	${CMAKE_CURRENT_SOURCE_DIR}/SMPOperations/test-mz.cpp
	ARGUMENTS 3 10
)



