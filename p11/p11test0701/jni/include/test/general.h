#ifndef __GENERAL_H
#define __GENERAL_H

#include "proxy.h"

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>



#ifdef __cplusplus
extern "C" {
#endif



//�����СPIN����
#define MAX_PIN_LEN 24
#define MIN_PIN_LEN 6

//P11���Ƿ�̬����
//#define _USE_STATIC_P11_

//�ض���Ŀ����

//����ʲ���
//#define _TEST_CSLC_

//Androidƽ̨����
#define _TEST_ON_ANDROID_

#ifdef _TEST_ON_ANDROID_
#undef __linux__
#undef linux
#undef __linux
#define __android__
#endif


#define USE_PROXY_OPEN 
//#define USE_STATIC_LIB_OPEN 
//#define SHOW_ERROR_TEST
//#define OPEN_LOGOUT_CLOSESSION
#ifdef OPEN_LOGOUT_CLOSESSION
#define TT_INIT_TOKEN
#endif
#ifdef WIN32
#define dllname "HD_Cryptoki.dll"
#define dllname_token "HD_Token.dll"
#elif defined(linux)
#define dllname "./libhd_cryptoki.so"
#elif defined(__android__)
//#define dllname "./libGAPIP11.so"
#ifdef USE_PROXY_OPEN
	#define dllname_my "./libPKCS11.so"
#else
	#define dllname_my "./libGAPIP11.so"
#endif
#define dllname_soft "./libPKCS11_S.so"
#define dllname_my_local "/system/libPKCS11.so"
#define dllname_my_absolute "/system/lib/libPKCS11.so"
#endif

#define CARD_VERSION_413 0x040D
#define CARD_VERSION_501 0x0501
extern unsigned short CardVersionData; 

extern const char * pathname;

extern char Testresult[100][10000];
extern int Testchoose[100];
extern int Test[100];
extern int nItemNumb;
extern int nResultLength;
//VALID=validity,PERF=performance

#define INIT_INFO		50
#define V_ZUC_ENC		1
#define V_ZUC_DEC		2
#define V_SM3_EN		3
#define V_SM2_MUL_D		4
#define V_SM2_MUL_H		5
#define V_SM2_CO		6
#define V_SM3_KDF		7
#define V_SM4_ECB_ENC	8
#define V_SM4_ECB_DEC	9
#define V_SM4_KEY__OFB	10
#define V_SM4_KEY__ECB	11
#define V_SM4_KEY__CBC	12
#define V_ZUC_KEY		13


//����ֵΪFALSEʱ������ǰ������������ʧ��
#define RV_FALSE_RETURN(_rtn)\
do\
{\
	if(_rtn == FALSE)\
	{\
		return FALSE;\
	}\
} while(0)
//private String ExampleTest[] = new String[]{
//	"1ZUC������ȷ��", 
//	"2ZUC������ȷ��",  
//	"3SM3������ȷ��",  
//	"4����Ϊ��Կֵ����Կ���", 
//	"5����Ϊ˽Կ�������Կ���",
//	"6SM2��ԿЭ��",
//	"7SM3��Կ����",
//	"8SM4������ȷ��ECB", 
//	"9SM4������ȷ��ECB",
//	"10SM4 OFB��Կ��RAM��Flash�Ĵ洢",
//	"11SM4 ECB��Կ��RAM��Flash�Ĵ洢",
//	"12SM4 CBC��Կ��RAM��Flash�Ĵ洢(UserPin)",
//	"13SM4 CBC��Կ��RAM��Flash�Ĵ洢(SoPin)",
//	"14ZUC ��Կ��RAM��Flash�Ĵ洢��UserPin��",
//	"ZUC ��Կ��RAM��Flash�Ĵ洢��SoPin��",
//	"ZUC�ӽ�������",  
//	"ZUCHASH��������",  
//	"SM2������Կ�Լӽ��ܣ�ǩ����ǩ����",
//	"SM2������Կ�Լӽ��ܣ�ǩ����ǩ����",
//	"SM3��������","SM4�ӽ�������OFB", 
//	"SM4�ӽ�������ECB", 
//	"SM4�ӽ�������CBC",
//	"SM3 KDF����",
//	"SM2�������",
//	"SM2������Կ������",
//	"SM4������Կ����",
//	"SM2��ԿЭ������",
//	"��ȡ�汾��Ϣ����", 
//	"��֤TF����¼״̬��Ϣ",
//	"SM3 KDF����洢����",
//	"SM3 KDF�ϵ���ɾ������",
//	"TF��Flash�洢����",
//	"�Գ���Կ��Flash�еĴ洢����",
//	"OTP PIN����",
//	"TT����",  
//	"�ٿ����ԣ����ã�",
//	"��֤�����޸�ң�������(����)",
//	"��֤��ȷ�޸�ң������������ã�", };
//
//


#define P_ZUC_IMP		10
#define P_ZUC_GEN		11
#define P_SM2_IMP		12
#define P_SM2_GEN		13
#define P_SM3			14
#define P_ZUC_HASH		15
#define P_SM4_ECB		16
#define P_SM4_CBC		17
#define P_SM4_OFB		18




//#define GETFUNCTIONLIST_CHOOSE 0
//#define INITIALIZE_CHOOSE  1
//#define GETSLOTINFO_CHOOSE  2

extern CK_C_GetFunctionList        pC_GetFunctionList;
extern CK_C_Initialize             pC_Initialize;
extern CK_C_Finalize				pC_Finalize;
extern CK_C_GetInfo				pC_GetInfo;
extern CK_C_GetSlotList			pC_GetSlotList;
extern CK_C_GetSlotInfo			pC_GetSlotInfo;
extern CK_C_GetTokenInfo			pC_GetTokenInfo;
extern CK_C_GetMechanismList		pC_GetMechanismList;
extern CK_C_GetMechanismInfo		pC_GetMechanismInfo;
extern CK_C_InitToken				pC_InitToken;
extern CK_C_InitPIN				pC_InitPIN;
extern CK_C_SetPIN					pC_SetPIN;
extern CK_C_OpenSession			pC_OpenSession;
extern CK_C_CloseSession			pC_CloseSession;
extern CK_C_CloseAllSessions		pC_CloseAllSessions;
extern CK_C_GetSessionInfo			pC_GetSessionInfo;	
extern CK_C_GetOperationState		pC_GetOperationState;
extern CK_C_SetOperationState		pC_SetOperationState;
extern CK_C_Login					pC_Login;
extern CK_C_Logout					pC_Logout;
extern CK_C_CreateObject			pC_CreateObject;
extern CK_C_CopyObject				pC_CopyObject;
extern CK_C_DestroyObject			pC_DestroyObject;
extern CK_C_GetObjectSize			pC_GetObjectSize;
extern CK_C_GetAttributeValue		pC_GetAttributeValue;
extern CK_C_SetAttributeValue		pC_SetAttributeValue;
extern CK_C_FindObjectsInit		pC_FindObjectsInit;
extern CK_C_FindObjects			pC_FindObjects;
extern CK_C_FindObjectsFinal		pC_FindObjectsFinal;
extern CK_C_EncryptInit			pC_EncryptInit;
extern CK_C_Encrypt				pC_Encrypt;
extern CK_C_EncryptUpdate			pC_EncryptUpdate;
extern CK_C_EncryptFinal			pC_EncryptFinal;
extern CK_C_DecryptInit			pC_DecryptInit;
extern CK_C_Decrypt				pC_Decrypt;
extern CK_C_DecryptUpdate			pC_DecryptUpdate;
extern CK_C_DecryptFinal			pC_DecryptFinal;
extern CK_C_DigestInit				pC_DigestInit;
extern CK_C_Digest					pC_Digest;
extern CK_C_DigestUpdate			pC_DigestUpdate;
extern CK_C_DigestKey				pC_DigestKey;
extern CK_C_DigestFinal			pC_DigestFinal;
extern CK_C_SignInit				pC_SignInit;
extern CK_C_Sign					pC_Sign;
extern CK_C_SignUpdate				pC_SignUpdate;
extern CK_C_SignFinal				pC_SignFinal;
extern CK_C_SignRecoverInit		pC_SignRecoverInit;
extern CK_C_SignRecover			pC_SignRecover;
extern CK_C_VerifyInit				pC_VerifyInit;
extern CK_C_Verify					pC_Verify;
extern CK_C_VerifyUpdate			pC_VerifyUpdate;
extern CK_C_VerifyFinal			pC_VerifyFinal;
extern CK_C_VerifyRecoverInit		pC_VerifyRecoverInit;
extern CK_C_VerifyRecover			pC_VerifyRecover;
extern CK_C_DigestEncryptUpdate	pC_DigestEncryptUpdate;
extern CK_C_DecryptDigestUpdate	pC_DecryptDigestUpdate;
extern CK_C_SignEncryptUpdate		pC_SignEncryptUpdate;
extern CK_C_DecryptVerifyUpdate	pC_DecryptVerifyUpdate;
extern CK_C_GenerateKey			pC_GenerateKey;
extern CK_C_GenerateKeyPair		pC_GenerateKeyPair;
extern CK_C_WrapKey				pC_WrapKey;
extern CK_C_UnwrapKey				pC_UnwrapKey;
extern CK_C_DeriveKey				pC_DeriveKey;
extern CK_C_SeedRandom				pC_SeedRandom;
extern CK_C_GenerateRandom			pC_GenerateRandom;
extern CK_C_GetFunctionStatus		pC_GetFunctionStatus;
extern CK_C_CancelFunction			pC_CancelFunction;
extern CK_C_WaitForSlotEvent		pC_WaitForSlotEvent;
extern CK_C_CryptoExtend			pC_CryptoExtend;

typedef CK_RV (*CK_C_Proxy_Init)();
typedef CK_RV (*CK_C_Proxy_Final)();
typedef CK_RV (*CK_C_Monopolize_Enable)();
typedef CK_RV (*CK_C_Monopolize_Disable)();
extern CK_C_Proxy_Init           pC_Proxy_Init;
extern CK_C_Proxy_Final          pC_Proxy_Final;
extern CK_C_Monopolize_Enable      pC_Monopolize_Enable;
extern CK_C_Monopolize_Disable     pC_Monopolize_Disable;

typedef const char* (*CK_C_StrErr)(unsigned int);
extern CK_C_StrErr               pC_StrErr;

typedef int (*CK_T_ReloadOTPPin_GenCipher)(unsigned char *pAdmPin, int iAdmPinLen, unsigned char *pucOTPPin, int iOTPPinLen, unsigned char pbRandom[16], unsigned char *pbCipherData, unsigned int *puiCipherDataLen);

extern CK_T_ReloadOTPPin_GenCipher	pC_ReloadOTPPin_GenCipher;

extern CK_SESSION_HANDLE hSession;
extern CK_SLOT_ID slotID;
extern CK_FUNCTION_LIST *  pFunctionList;

extern CK_UTF8CHAR userpin[MAX_PIN_LEN+1];
extern CK_UTF8CHAR adminpin[MAX_PIN_LEN+1];

extern char czAppName[32] ;
extern int ilevel;


/*װ�ض�̬���ӿ�*/
CK_RV test_loadlibrary();
/*ж�ض�̬���ӿ�*/
CK_RV test_freelibrary();
/*ͨ����̬��ʽ��ȡ�����б�*/
CK_RV test_getfunctionlist();
/*���豸*/
CK_RV test_opendevice();
/*�ر��豸*/
CK_RV test_closedevice();
/*��ȡ������Ϣ*/
CK_RV test_geteveryinfo();
/*��ʼ���豸*/
CK_RV test_InitToken();
/*����Ϊ30��ͨר�Ŷ��ƵĻ�ȡKey״̬�Ľӿ�*/
CK_RV test_keystate();
/*�ٿ�����*/
CK_RV test_destroykey();
/*OTP PIN����*/
CK_RV test_otp();
CK_RV test_otp_reset_user();

void RandomGenerate(unsigned char* address,unsigned int cnt);



//��ȡCK_UTF8CHAR�ַ������ȣ�Ҫ���ַ�����\0��β��
CK_ULONG Util_GetUTF8CharLen(CK_UTF8CHAR_PTR pChar);

CK_RV xtest_TokenStorageKeyPairVerify();

CK_RV xtest_FindObjectNumber();
CK_RV test_getstatic();
CK_RV test_freestatic();
CK_RV test_getinfo();

CK_RV test_get_slotinfo_kokeninfo();


#ifdef __cplusplus
}
#endif

#endif