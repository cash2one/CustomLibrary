#ifndef  GENKEYPAIR_H_
#define  GENKEYPAIR_H_

#ifdef __cplusplus
extern "C" {
#endif

#if 0
void Test_GenKeyPair();
#else
/*����ECC��Կ��*/
bool test_ECC_GenKeyPair(CK_OBJECT_HANDLE *phPublicKey,CK_OBJECT_HANDLE *phPrivateKey);
/*����ECC��Կ��*/
bool test_ECC_importKeyPair(CK_OBJECT_HANDLE *phPublicKey,CK_OBJECT_HANDLE *phPrivateKey);
/*����RSA��Կ��*/
bool test_RSA_GenKeyPair(CK_OBJECT_HANDLE *phPublicKey,CK_OBJECT_HANDLE *phPrivateKey);
/*����RSA��Կ��*/
bool test_RSA_importKeyPair(CK_OBJECT_HANDLE *phPublicKey,CK_OBJECT_HANDLE *phPrivateKey);
#endif


#ifdef __cplusplus
}
#endif

#endif
