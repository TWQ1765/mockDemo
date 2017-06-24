/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_multiplydivide.h"

static const char* CMockString_divide = "divide";
static const char* CMockString_multiply = "multiply";
static const char* CMockString_v1 = "v1";
static const char* CMockString_v2 = "v2";

typedef struct _CMOCK_multiply_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;
  int CallOrder;
  int Expected_v1;
  int Expected_v2;

} CMOCK_multiply_CALL_INSTANCE;

typedef struct _CMOCK_divide_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;
  int CallOrder;
  int Expected_v1;
  int Expected_v2;

} CMOCK_divide_CALL_INSTANCE;

static struct mock_multiplydivideInstance
{
  int multiply_IgnoreBool;
  int multiply_FinalReturn;
  CMOCK_multiply_CALLBACK multiply_CallbackFunctionPointer;
  int multiply_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE multiply_CallInstance;
  int divide_IgnoreBool;
  int divide_FinalReturn;
  CMOCK_divide_CALLBACK divide_CallbackFunctionPointer;
  int divide_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE divide_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_multiplydivide_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.multiply_IgnoreBool)
    Mock.multiply_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_multiply);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.multiply_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.multiply_CallbackFunctionPointer != NULL)
    Mock.multiply_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.divide_IgnoreBool)
    Mock.divide_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_divide);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.divide_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.divide_CallbackFunctionPointer != NULL)
    Mock.divide_CallInstance = CMOCK_GUTS_NONE;
}

void mock_multiplydivide_Init(void)
{
  mock_multiplydivide_Destroy();
}

void mock_multiplydivide_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.multiply_CallbackFunctionPointer = NULL;
  Mock.multiply_CallbackCalls = 0;
  Mock.divide_CallbackFunctionPointer = NULL;
  Mock.divide_CallbackCalls = 0;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

int multiply(int v1, int v2)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_multiply_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_multiply);
  cmock_call_instance = (CMOCK_multiply_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.multiply_CallInstance);
  Mock.multiply_CallInstance = CMock_Guts_MemNext(Mock.multiply_CallInstance);
  if (Mock.multiply_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.multiply_FinalReturn;
    Mock.multiply_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.multiply_CallbackFunctionPointer != NULL)
  {
    return Mock.multiply_CallbackFunctionPointer(v1, v2, Mock.multiply_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_multiply,CMockString_v1);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_v1, v1, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_multiply,CMockString_v2);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_v2, v2, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_multiply(CMOCK_multiply_CALL_INSTANCE* cmock_call_instance, int v1, int v2)
{
  cmock_call_instance->Expected_v1 = v1;
  cmock_call_instance->Expected_v2 = v2;
}

void multiply_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_multiply_CALL_INSTANCE));
  CMOCK_multiply_CALL_INSTANCE* cmock_call_instance = (CMOCK_multiply_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.multiply_CallInstance = CMock_Guts_MemChain(Mock.multiply_CallInstance, cmock_guts_index);
  Mock.multiply_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.multiply_IgnoreBool = (int)1;
}

void multiply_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int v1, int v2, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_multiply_CALL_INSTANCE));
  CMOCK_multiply_CALL_INSTANCE* cmock_call_instance = (CMOCK_multiply_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.multiply_CallInstance = CMock_Guts_MemChain(Mock.multiply_CallInstance, cmock_guts_index);
  Mock.multiply_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_multiply(cmock_call_instance, v1, v2);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void multiply_StubWithCallback(CMOCK_multiply_CALLBACK Callback)
{
  Mock.multiply_IgnoreBool = (int)0;
  Mock.multiply_CallbackFunctionPointer = Callback;
}

int divide(int v1, int v2)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_divide_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_divide);
  cmock_call_instance = (CMOCK_divide_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.divide_CallInstance);
  Mock.divide_CallInstance = CMock_Guts_MemNext(Mock.divide_CallInstance);
  if (Mock.divide_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.divide_FinalReturn;
    Mock.divide_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.divide_CallbackFunctionPointer != NULL)
  {
    return Mock.divide_CallbackFunctionPointer(v1, v2, Mock.divide_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_divide,CMockString_v1);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_v1, v1, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_divide,CMockString_v2);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_v2, v2, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_divide(CMOCK_divide_CALL_INSTANCE* cmock_call_instance, int v1, int v2)
{
  cmock_call_instance->Expected_v1 = v1;
  cmock_call_instance->Expected_v2 = v2;
}

void divide_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_divide_CALL_INSTANCE));
  CMOCK_divide_CALL_INSTANCE* cmock_call_instance = (CMOCK_divide_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.divide_CallInstance = CMock_Guts_MemChain(Mock.divide_CallInstance, cmock_guts_index);
  Mock.divide_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.divide_IgnoreBool = (int)1;
}

void divide_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int v1, int v2, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_divide_CALL_INSTANCE));
  CMOCK_divide_CALL_INSTANCE* cmock_call_instance = (CMOCK_divide_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.divide_CallInstance = CMock_Guts_MemChain(Mock.divide_CallInstance, cmock_guts_index);
  Mock.divide_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_divide(cmock_call_instance, v1, v2);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void divide_StubWithCallback(CMOCK_divide_CALLBACK Callback)
{
  Mock.divide_IgnoreBool = (int)0;
  Mock.divide_CallbackFunctionPointer = Callback;
}

