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
#include<stdio.h>
#include<string.h>
#include"contact.h"



//��ӡ����
void my_print(){

	printf("**************************\n");
	printf("*1.add           2.del****\n");
	printf("*3.modification  4.search*\n");
	printf("*5.rank          6.print**\n");
	printf("*        0.exit          *\n");
	printf("**************************\n");
	
}

//��ʼ��
void initial(Contact* contact){
	memset(contact->data, 0, sizeof(contact->data));
	contact->sz = 0;
}


//������Ϣ
void add_contact(Contact* contact){
	
	//ͨѶ¼���˵����
	if (MAX_NUM == contact->sz){
		printf("ͨѶ¼�Ѿ����ˣ�\n");
		return;
	}
	//�洢��Ϣ
	printf("����������:\n");
	scanf("%s", contact->data[contact->sz].name);
	printf("����������:\n");
	scanf("%d", &contact->data[contact->sz].age);
	printf("�������Ա�:\n");
	scanf("%s", contact->data[contact->sz].sex);
	printf("������绰:\n");
	scanf("%s", contact->data[contact->sz].tel);
	printf("�������ַ:\n");
	scanf("%s", contact->data[contact->sz].addr);

	printf("¼��ɹ�");

	//�����±��һ
	contact->sz++;

}


//��ӡ����
void print_contact(const Contact* contact){
	//δ¼��
	if (0 == contact->sz){
		printf("û�����ݣ���\n");
	}
	//�м�����Ϣ�ʹ�ӡ����
	printf("����      ����       �Ա�       �绰       ��ַ\n");
	for (int i = 0; i < contact->sz; i++){
		//printf("*************************************\n");
		//printf("����Ϊ��%s\n", contact->data[i].name);
		//printf("����Ϊ��%d\n", contact->data[i].age);
		//printf("�Ա�Ϊ��%s\n", contact->data[i].sex);
		//printf("�绰Ϊ��%s\n", contact->data[i].tel);
		//printf("��ַΪ��%s\n", contact->data[i].addr);
		//printf("*************************************\n");
		printf("%s        ", contact->data[i].name);
		printf("%d         ", contact->data[i].age);
		printf("%s         ", contact->data[i].sex);
		printf("%s         ", contact->data[i].tel);
		printf("%s         \n", contact->data[i].addr);

	}
}


//ɾ����Ϣ
void del_contact(Contact* contact){
	
	//��ʱ���ҵ��ַ���������
	char temp[200] = { 0 };
	//ȷ���Ƿ�ɾ������ʱ����
	int temp_1 = 0;


	//�ж�ͨѶ¼�Ƿ�Ϊ��
	if (0 == contact->sz){
		printf("����ɾ��\n");
		return;
	}

	//������ҵ�����
	printf("����������:\n");
	scanf("%s", temp);

	//�����Ƿ�������ˣ�ͨ������
	for (int i = 0; i < contact->sz; i++){
		if (0 == strcmp(temp, contact->data[i].name)){
			printf("ͨѶ¼�д��ڴ��ˣ���\n");
			 
			//���ҵ���ɾ��
			printf("�Ƿ�ȷ��ɾ������1/0��\n");
			scanf("%d", &temp_1);

			//�ж����
			if (temp_1){
				memset(&(contact->data[i]), 0, sizeof(contact->data[i]));
				printf("�����Ѿ��ɹ���ɾ����\n");
				rank_contact(contact,i);
				contact->sz--;
				return;
			}
			else{
				printf("������δ��ɾ����\n");
				return;
			}

		}
	}
	printf("δ���ҵ����ˣ���\n");


}


//������Ϣ
int sear_contact(Contact* contact){

	//��ʱ���ҵ��ַ���������
	char temp[MAX_NAME] = { 0 };

	//������ҵ�����
	printf("����������:\n");
	scanf("%s", temp);

	//�����Ƿ�������ˣ�ͨ������
	for (int i = 0; i < contact->sz; i++){
		if (0 == strcmp(temp, contact->data[i].name)){
			printf("ͨѶ¼�д��ڴ���,��ͨѶ¼�е�%d��\n", i + 1);
			return i;
		}
	}
	printf("�����ڴ��ˣ�\n");
	return -1;
}

//�޸���Ϣ
void modif_contact(Contact* contact){

	//����,������������±�
	int num = sear_contact(contact);

	//�Ȳ��Ҵ治����
	if (0 != num){
		printf("������Ϣ�����ڣ�\n");
	}

	//ͨ���±���ҵ��޸ĵ������±�
	printf("�޸Ĳ�����\n");
	printf("����������:\n");
	scanf("%s", contact->data[num].name);
	printf("����������:\n");
	scanf("%d", &contact->data[num].age);
	printf("�������Ա�:\n");
	scanf("%s", contact->data[num].sex);
	printf("������绰:\n");
	scanf("%s", contact->data[num].tel);
	printf("�������ַ:\n");
	scanf("%s", contact->data[num].addr);
	printf("�޸ĳɹ���\n");
}

//�����Ϣ�Ѿ���ɾ�����������һ����Ϣǰ��
void rank_contact(Contact* contact,int begain){

	//��Ԫ����ǰ�ƶ�
	for (int i = begain; i < contact->sz; i++){
		contact->data[i] = contact->data[i + 1];
	}


}