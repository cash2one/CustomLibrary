
#ifndef AUTH_H_
#define AUTH_H_
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/*��֤*/
CK_RV test_login(CK_USER_TYPE userType);
/*ע����֤*/
CK_RV test_logout();

#ifdef __cplusplus
}
#endif

#endif