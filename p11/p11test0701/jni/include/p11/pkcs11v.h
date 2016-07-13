#ifndef _HD_ALG_DEF_H_
#define _HD_ALG_DEF_H_

//ECC PKCS#11����
#ifndef ___CRYPTOKI_H_INC___
#define CKA_VENDOR_DEFINED     0x80000000
#define CKM_VENDOR_DEFINED     0x80000000
#define CKK_VENDOR_DEFINED     0x80000000
#endif

//ECC Attributes
#define CKA_ECC_BITS_LEN 	 CKA_VENDOR_DEFINED+1//CK_ULONG
#define CKA_ECC_X_COORDINATE CKA_VENDOR_DEFINED+2//Big integer
#define CKA_ECC_Y_COORDINATE CKA_VENDOR_DEFINED+3//Big integer
#define CKA_ECC_PRIVATE 	 CKA_VENDOR_DEFINED+4//Big integer

//ECC mechanism
#define CKM_ECC_KEY_PAIR_GEN CKM_VENDOR_DEFINED+1
#define CKM_ECC_CALC		 CKM_VENDOR_DEFINED+2

//ECC key type
#define CKK_ECC				 CKK_VENDOR_DEFINED+1

//SSF33 PKCS#11����
//SSF33 mechanism
#define CKM_SSF33_KEY_GEN  (CKM_VENDOR_DEFINED + 10)//(CKM_VENDOR_DEFINED + 1)
#define CKM_SSF33_ECB      (CKM_VENDOR_DEFINED + 11)//(CKM_VENDOR_DEFINED + 2)
#define CKM_SSF33_CBC      (CKM_VENDOR_DEFINED + 12)//(CKM_VENDOR_DEFINED + 3)  
#define CKM_SSF33_CBC_PAD  (CKM_VENDOR_DEFINED + 13)//(CKM_VENDOR_DEFINED + 4)
#define CKM_SSF33_ECB_PAD  (CKM_VENDOR_DEFINED + 14)//(CKM_VENDOR_DEFINED + 5) 
//SSF33 key type
#define CKK_SSF33          (CKK_VENDOR_DEFINED + 2)//(CKK_VENDOR_DEFINED + 1)

//SM1 PKCS#11����
//mechanism
#define CKM_SM1_KEY_GEN  (CKM_VENDOR_DEFINED + 20)
#define CKM_SM1_ECB      (CKM_VENDOR_DEFINED + 21)
#define CKM_SM1_CBC      (CKM_VENDOR_DEFINED + 22)  
#define CKM_SM1_CBC_PAD  (CKM_VENDOR_DEFINED + 23)
#define CKM_SM1_ECB_PAD  (CKM_VENDOR_DEFINED + 24)
//key type
#define CKK_SM1          (CKK_VENDOR_DEFINED + 3)

// //SM4 PKCS#11����
// //mechanism
#define CKM_SM4_KEY_GEN  (CKM_VENDOR_DEFINED + 40)
#define CKM_SM4_ECB      (CKM_VENDOR_DEFINED + 41)
#define CKM_SM4_CBC      (CKM_VENDOR_DEFINED + 42)  
#define CKM_SM4_CBC_PAD  (CKM_VENDOR_DEFINED + 43)
#define CKM_SM4_ECB_PAD  (CKM_VENDOR_DEFINED + 44)
#define CKM_SM4_OFB      (CKM_VENDOR_DEFINED + 45)
#define CKM_SM4_OFB_PAD  (CKM_VENDOR_DEFINED + 46)
//key type
#define CKK_SM4          (CKK_VENDOR_DEFINED + 5)

// //ZUC PKCS#11����
// //mechanism
#define CKM_ZUC_KEY_GEN  (CKM_VENDOR_DEFINED + 50)
#define CKM_ZUC_CALC	 (CKM_VENDOR_DEFINED + 51)
#define CKM_HASH_ZUC_CALC	 (CKM_VENDOR_DEFINED + 52)

#define CKM_HMAC_SM3                (CKM_VENDOR_DEFINED + 0xA001)     //pParameter is the key handle
#define CKM_HMAC_SM3_WITH_PRESET    (CKM_VENDOR_DEFINED + 0xA002)     //pParameter is the key
#define CKM_HMAC_SM3_KEY_GEN        (CKM_VENDOR_DEFINED + 0xA003)  


#define CKK_SM3          (CKK_VENDOR_DEFINED + 8)

//key type
#define CKK_ZUC          (CKK_VENDOR_DEFINED + 6)

//Hash PKCS#11����
//mechanism
#define CKM_HASH_CUSTOM (CKM_VENDOR_DEFINED + 30)
#define CKM_HASH_SM3 	(CKM_VENDOR_DEFINED + 31)

/********************30��ͨ��Կ�������ƶ���********************/
//��Կ���� PKCS#11����
//mechanism
#define CKM_SESSKEY_EXCHANGE_GEN	(CKM_VENDOR_DEFINED+60)
#define CKK_SESSKEY_EXCHANGE		(CKK_VENDOR_DEFINED + 7)

#define CKA_SESSKEY_ID				(CKA_VENDOR_DEFINED+401)
#define CKA_KEY_ID					(CKA_VENDOR_DEFINED+402)
#define CKA_ISEXCHANGEKEY			(CKA_VENDOR_DEFINED+403)

//SM2��Կ��װ����
//mechanism
#define CKM_SM2_WRAP		(CKM_VENDOR_DEFINED+61)
#define CKM_SM2_UNWRAP		(CKM_VENDOR_DEFINED+62)
#define CKM_30RAYCOM_DERIVE	(CKM_VENDOR_DEFINED+63)

//�������ɵ���Կ��֧��16��
#define CK_SESSKEY_ID0	0
#define CK_SESSKEY_ID1	1
#define CK_SESSKEY_ID2	2
#define CK_SESSKEY_ID3	3
#define CK_SESSKEY_ID4	4
#define CK_SESSKEY_ID5	5
#define CK_SESSKEY_ID6	6
#define CK_SESSKEY_ID7	7
#define CK_SESSKEY_ID8	8
#define CK_SESSKEY_ID9	9
#define CK_SESSKEY_ID10	10
#define CK_SESSKEY_ID11	11
#define CK_SESSKEY_ID12	12
#define CK_SESSKEY_ID13	13
#define CK_SESSKEY_ID14	14
#define CK_SESSKEY_ID15	15

//�ⲿ�������Կ��֧��8��
#define CK_SESSKEY_PRESET_ID0	0x10
#define CK_SESSKEY_PRESET_ID1	0x11
#define CK_SESSKEY_PRESET_ID2	0x12
#define CK_SESSKEY_PRESET_ID3	0x13
#define CK_SESSKEY_PRESET_ID4	0x14
#define CK_SESSKEY_PRESET_ID5	0x15
#define CK_SESSKEY_PRESET_ID6	0x16
#define CK_SESSKEY_PRESET_ID7	0x17

//C_CleanFlags��ζ���
#define CK_CLEANFLAG_CRYPTO		1//��������Slot��Hash/Encrypt/Decrypt/Find��

/********************30��ͨ��˽ӿڻ��ƶ���********************/
#define CKM_DERIVE_SM2_POINTMUL_1	(CKM_VENDOR_DEFINED+70)
#define CKM_DERIVE_SM2_POINTMUL_2	(CKM_VENDOR_DEFINED+71)

/********************30��ͨ��Կ�������ƶ���********************/
#define CKM_DERIVE_SM3_KDF			(CKM_VENDOR_DEFINED+72)
#define CKM_DERIVE_SM3_KDF_WITH_PRESET (CKM_VENDOR_DEFINED+73)


/********************30��ͨSM2��Կ�������ƶ���*********************/
#define CKM_DERIVE_SM2KEYEX		(CKM_VENDOR_DEFINED+74)

#ifndef _LINUX_MACRO_
typedef CK_ULONG CK_EXTEND_TYPE;
#else
typedef CK_UINT CK_EXTEND_TYPE;
#endif

typedef struct CK_EXTEND_IN_STRUCT { //��չҵ��ӿڴ�������ṹ��
	CK_EXTEND_TYPE extendType; //��չҵ�����ͱ�ʶ������š��绰��
	CK_VOID_PTR pParameter; //��չҵ��ӿڴ��������ַ
#ifndef _LINUX_MACRO_
	CK_ULONG ulParameterLen; //��չҵ��ӿڴ����������
#else
	CK_UINT ulParameterLen; //��չҵ��ӿڴ����������
#endif
} CK_EXTEND_IN;

typedef struct CK_EXTEND_OUT_STRUCT { //��չҵ��ӿڴ��������ṹ��
	CK_EXTEND_TYPE extendType; //��չҵ�����ͱ�ʶ������š��绰��
	CK_VOID_PTR pParameter; //��չҵ��ӿڴ���������ַ
#ifndef _LINUX_MACRO_
	CK_ULONG ulParameterLen; //��չҵ��ӿڴ�����������
#else
	CK_UINT ulParameterLen; //��չҵ��ӿڴ�����������
#endif
} CK_EXTEND_OUT;

typedef CK_EXTEND_IN CK_PTR CK_EXTEND_IN_PTR;
typedef CK_EXTEND_OUT CK_PTR CK_EXTEND_OUT_PTR;

#define CK_EXTEND_BASE                         0x00000000
#define CK_EXTEND_VERIFYPIN                    CK_EXTEND_BASE+1
#define CK_EXTEND_GETSN                        CK_EXTEND_BASE+2
#define CK_EXTEND_GETPINTIME                   CK_EXTEND_BASE+3
#define CK_EXTEND_GETSDSTATUS                  CK_EXTEND_BASE+4
#define CK_EXTEND_GETEXCHANGEPUBKEY            CK_EXTEND_BASE+5
#define CK_EXTEND_GETEXCHANGESESSKEY           CK_EXTEND_BASE+6
#define CK_EXTEND_SETMONITORSM2PUBKEY          CK_EXTEND_BASE+7
#define CK_EXTEND_SETBASEKEY                   CK_EXTEND_BASE+8
#define CK_EXTEND_ENCRYPTBYSK                  CK_EXTEND_BASE+9
#define CK_EXTEND_DECRYPTBYSK                  CK_EXTEND_BASE+10
#define CK_EXTEND_GETSK                        CK_EXTEND_BASE+11
#define CK_EXTEND_SETSM3KDFBASEKEY             CK_EXTEND_BASE+12
#define CK_EXTEND_GETLOGINSTATE                CK_EXTEND_BASE+13
#define CK_EXTEND_SETDESTROYKEY                CK_EXTEND_BASE+14
#define CK_EXTEND_DODESTROY                    CK_EXTEND_BASE+15
#define CK_EXTEND_RESET_USERPIN                CK_EXTEND_BASE+16
#define CK_EXTEND_RESET_OTPPIN                 CK_EXTEND_BASE+17
#define CK_EXTEND_GETOTPTIME_USABLE            CK_EXTEND_BASE+18
#define CK_EXTEND_GETOTPTIME_TRY               CK_EXTEND_BASE+19
#define CK_EXTEND_REMOTE_SET_DATA              CK_EXTEND_BASE+20
#define CK_EXTEND_REMOTE_GET_DATAVER           CK_EXTEND_BASE+21
#define CK_EXTEND_END                          CK_EXTEND_BASE+22


/**********Ϊ������ʿͨ��30��ͨ��P11�ӿڣ��������º���ṹ��***********/
#ifdef _WIN32
#include <windows.h>
#include <WinCrypt.h>
#else
#define ALG_CLASS_ANY                   (0)
#define ALG_CLASS_SIGNATURE             (1 << 13)
#define ALG_CLASS_MSG_ENCRYPT           (2 << 13)
#define ALG_CLASS_DATA_ENCRYPT          (3 << 13)
#define ALG_CLASS_HASH                  (4 << 13)
#define ALG_CLASS_KEY_EXCHANGE          (5 << 13)
#define ALG_CLASS_ALL                   (7 << 13)

#define AT_KEYEXCHANGE          1
#define AT_SIGNATURE            2
#endif

//����������¼��Կ��;������������������
#define	CKA_LOCATION_ATTRIBUTES	(CKA_VENDOR_DEFINED+501) //��������
typedef struct __LOCATION_ATTR_VALUE //���Խṹ��
{
	CK_UINT	keyspec;	//��Կ��˽Կ��֤���λ�ñ�ʶ����ֵ����ΪAT_KEYEXCHANGE,
	//AT_SIGNATURE,CALG_ECC_SIGN,CALG_ECC_SIGN��CALG_ECC_KEYX
	CK_BYTE	szContainer[256];	//csp�ӿ�д��֤�����Կʱ�����������ַ���
} LOCATION_ATTR_VALUE;
#define ALG_TYPE_ECC	(7 << 9)
#define ALG_SID_ECC_ANY	0
#define CALG_ECC_SIGN	(ALG_CLASS_SIGNATURE   | ALG_TYPE_ECC | ALG_SID_ECC_ANY)
#define CALG_ECC_KEYX	(ALG_CLASS_KEY_EXCHANGE| ALG_TYPE_ECC | ALG_SID_ECC_ANY)

//��������SM3�����������Ʋ���
typedef struct __HASHPARM
{
	short	Len;   //pID��ռλ������˸�ʽ
	CK_BYTE	pID[16];
	CK_BYTE	pubKey[64];
} HASHPARM;
#define	WESTON_ECC_PUBKEY_VERIFY_LABEL "ForECCVerify" //��������Zֵ�����⹫Կ����
#define	WESTON_ECC_BITS_LEN	256 //��������Zֵ�����⹫Կ����

#endif
