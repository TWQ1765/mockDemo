#include "unity.h"
#include "simplemock.h"
#include  "mock_multiplydivide.h" // "mock_" file not exit ,just way to comm ceedling.
void setUp(void)
{
}

void tearDown(void)
{
}
//------USE OF MOCK----------
//can check the order of the function
//and the input of the function
void test_simplemock_(void)
{
  int result;
  multiply_ExpectAndReturn(2, 3, 6); // 1st tow is input parameter last one is result
  divide_ExpectAndReturn(10, 5, 2);// if the input 'X' then not pass test
  
  result = addMultiplyAndDivide(2,3,10,5);// real input here
  TEST_ASSERT_EQUAL(8, result);
}
