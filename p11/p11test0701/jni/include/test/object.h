
#ifndef OBJECT_H_
#define OBJECT_H_



#ifdef __cplusplus
extern "C" {
#endif


/*ɾ������*/
bool test_deleteobject(CK_OBJECT_HANDLE hobj);
/*����(���������ҡ�ɾ��)*/
bool test_objects();

void test_object_attribute();

void test_object_attribute_read();

bool test_data_objects();



CK_RV test_object_westone();

/*��������֧�ֶ��ٶ���*/
bool test_object_max_count();

/*���Ե��뵼��֤�����*/
bool test_object_cert();

bool test_object_cert_d_c_r_d();
bool test_object_data_d_c_r_d();
/*���ԶԳ���ԿSM4����*/
bool test_Flash_SymmetricKey();

#ifdef __cplusplus
}
#endif

#endif