//ͨѶ¼
//1.���1000����Ϣ
//ÿ������Ϣ
//����+����+�Ա�+�绰+��ַ
//2.�����˵���Ϣ
//3.ɾ��ָ������Ϣ
//4.�޸�ָ������Ϣ
//5.����ָ������Ϣ
//6.������Ϣ
#define _CRT_SECURE_NO_WARNINGS 1;

//���� �绰 �Ա� ��ַ���������궨��
#define MAX_NAME 20
#define MAX_TEL  20
#define MAX_SEX  10
#define MAX_ADDR  30
//ͨѶ¼�������
#define MAX_NUM 1000


//��Ϣ�ṹ�嶨��
typedef struct Person{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
}Person;

//ͨѶ¼�ṹ��
typedef struct Contact{
	//����ͨѶ¼����
	Person data[MAX_NUM];
	//��Чֵ�±�
	int sz;
}Contact;



//��ӡ
void my_print();
//��ʼ��
void initial(Contact* contact);
//������Ϣ
void add_contact(Contact* contact);
//��ӡ����
void print_contact(const Contact* contact);
//ɾ����Ϣ
void del_contact(Contact* contact);
//������Ϣ
int sear_contact(Contact* contact);
//�޸���Ϣ
void modif_contact(Contact* contact);
//�����Ϣ�Ѿ���ɾ�����������һ����Ϣǰ��
void rank_contact(Contact* contact, int begain);


