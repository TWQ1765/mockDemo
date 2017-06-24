#include "build/temp/_test_simplemock.c"
#include "mock_multiplydivide.h"
#include "simplemock.h"
#include "unity.h"
void setUp(void)

{

}



void tearDown(void)

{

}







void test_simplemock_(void)

{

  int result;



  divide_CMockExpectAndReturn(18, 10, 5, 2);

  multiply_CMockExpectAndReturn(19, 2, 3, 6);



  result = addMultiplyAndDivide(2,3,10,5);

  UnityAssertEqualNumber((UNITY_INT)((8)), (UNITY_INT)((result)), (

 ((void *)0)

 ), (UNITY_UINT)(22), UNITY_DISPLAY_STYLE_INT);

}
