#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>
#include"contact.h"

//ͨѶ¼
//1.���1000����Ϣ
//ÿ������Ϣ
//����+����+�Ա�+�绰+��ַ
//2.�����˵���Ϣ
//3.ɾ��ָ������Ϣ
//4.�޸�ָ������Ϣ
//5.����ָ������Ϣ
//6.������Ϣ

//ö�٣�����switch���֣����ӿɶ���
enum options{
	exit, 
	add,
	del,
	modification,
	search,
	rank,
	print
};


int main(){
	//�洢ѡ��˵�����
	int input = 0;

	//ͨ��¼��������
	Contact contact;
	
	//��ʼ������
	initial(&contact); 

	
	do{
		//��ӡ���˵�
		my_print();
		
		//����ѡ��
		printf("\n��ѡ���ܣ�\n");
		scanf_s("%d", &input);

		//ͨ��switch�������ж�����Ҫ�Ĺ���
		switch(input){
			case add:
				//������Ϣ
				add_contact(&contact);
				break;
			case del:
				//ɾ����Ϣ
				del_contact(&contact);
				break;
			case modification:
				//�޸ĸ�����Ϣ
				modif_contact(&contact);
				break;
			case search:
				//������Ϣ
				sear_contact(&contact);	
				break;
			case rank:
				////�����Ϣ�Ѿ���ɾ�����������һ����Ϣǰ��
				//rank_contact(&contact);
				break;
			case print:
				//��ӡ����
				print_contact(&contact);
				break;
			default:
				printf("�������");
				break;
		}

	} while (input);




	return 0;

}