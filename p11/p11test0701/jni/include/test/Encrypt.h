#ifndef ENCRYPT_H_
#define ENCRYPT_H_
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif



/*����ZUC ���ܹ���*/
bool xtest_ZUCEncrypt();
/*����ZUC���ܹ���*/
bool xtest_ZUCDecrypt();
/*����ZUC �ӽ�������*/
bool xtest_ZUCPerformance(int,int);
bool test_ZUCRAM(CK_BYTE, CK_BYTE, int);
bool test_ZUCFLASHValue(CK_BYTE, CK_BYTE, int);
bool test_ZUCFLASHnoValue(CK_BYTE, CK_BYTE, int);

/*����SM3 ���ܹ��ܣ�����Ϊdigest*/
bool xtest_SM3Encrypt();
/*�������㷨HMAC*/
bool test_HMACWithPreset();
/*����SM3 �����ٶȣ�����Ϊdigest*/
bool xtest_SM3Performance(int,int);

//bool TestSM2Performance();
bool xtest_SM2GenPerformance(int,int);
bool xtest_SM2ImportPerformance(int,int);
bool xtest_SM2PointMul1();
bool xtest_SM2PointMul2();
bool xtest_SM2KeyCoordinate();
bool xtest_SM3KDF();


//SM4�ӽ����й̶����������ECBģʽ
bool xtest_SM4ECB_Encrypt();
bool xtest_SM4ECB_Decrypt();
bool xtest_ZUCEncrypt_new();

//SM4���ܲ��԰���OFB ECB CBC ����ģʽ
bool xtest_SM4OFB_Speed(int,int);
bool xtest_SM4ECB_Speed(int,int);
bool xtest_SM4CBC_Speed(int,int);
bool test_SM4RAMnoValue(CK_MECHANISM_TYPE, CK_BYTE, CK_BYTE, int);
bool test_SM4FLASHValue(CK_MECHANISM_TYPE, CK_BYTE, CK_BYTE, int);
bool test_SM4FLASHnoValue(CK_MECHANISM_TYPE, CK_BYTE, CK_BYTE, int);

bool xtest_SM3KDF_Speed();

bool xtest_SM2PointMul_speed(int);

bool xtest_GenerateKeyPair_Performance(int);
bool xtest_GenerateKey_Performace(int);

bool xtest_SM3KDF_Object();
bool xtest_SM3KDF_OFF();
bool xtest_SM2KeyCoordinate_Performace();


bool xtest_GenerateKeyPair_NotDestory();
bool xtest_FindKeyObjectAndDestory();

bool xtest_SM2PointMul1xx();

bool xtest_SetDestroyKeyCorrect();
bool xtest_SetDestroyKeyIncorrect();

bool xtest_DestroyKey();

bool xtest_ZUCHashPerformance_withkey(int,int);

bool xtest_KeyExchange();
bool xtest_Flash_Normal();
bool xtest_FindCertObjectAndDestory();

bool xtest_SM4ECB_Create_Object();
bool xtest_FindSecretKEY();
CK_RV test_otp_remote();
bool xtest_Flash_GenerateKeypair();

CK_RV test_ImportKeyWithCipher(CK_MECHANISM_TYPE mechUnwrapType, unsigned char *pbIV, unsigned int uiIVLen, CK_OBJECT_HANDLE hUnwrapKey, CK_OBJECT_CLASS keyClass, CK_KEY_TYPE keyType, CK_BBOOL bToken, CK_BYTE keyID, unsigned char *pbCipher, unsigned int uiCipherLen);


#ifdef __cplusplus
}
#endif

#endif