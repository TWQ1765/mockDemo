/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_MULTIPYDEVIDE_H
#define _MOCK_MULTIPYDEVIDE_H

#include "multipydevide.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_multipydevide_Init(void);
void mock_multipydevide_Destroy(void);
void mock_multipydevide_Verify(void);




#define multiply_IgnoreAndReturn(cmock_retval) multiply_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void multiply_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define multiply_ExpectAndReturn(v1, v2, cmock_retval) multiply_CMockExpectAndReturn(__LINE__, v1, v2, cmock_retval)
void multiply_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int v1, int v2, int cmock_to_return);
typedef int (* CMOCK_multiply_CALLBACK)(int v1, int v2, int cmock_num_calls);
void multiply_StubWithCallback(CMOCK_multiply_CALLBACK Callback);
#define divide_IgnoreAndReturn(cmock_retval) divide_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void divide_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define divide_ExpectAndReturn(v1, v2, cmock_retval) divide_CMockExpectAndReturn(__LINE__, v1, v2, cmock_retval)
void divide_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int v1, int v2, int cmock_to_return);
typedef int (* CMOCK_divide_CALLBACK)(int v1, int v2, int cmock_num_calls);
void divide_StubWithCallback(CMOCK_divide_CALLBACK Callback);

#endif