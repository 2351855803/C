#include<stdio.h>
#include"game.h"
#include<time.h>
#include<stdlib.h>





int main(){

	//��srand����������
	srand((unsigned int)time(NULL));

	//ѡ��������
	int input;

	//��ӡ��ʼ����
	display_first();

	//�����ά����
	char arr[hang][lie] = { 0 };


	//ѡ�� ----------------> 1.������Ϸ 0.�˳� ����.����ѡ��
	do{
		printf("������ѡ�");
		scanf_s("%d", &input);
		switch (input){

		    case 1:
			    //������Ϸ
			    printf("������Ϸ��\n");
				printf("\n");
				printf("\n");

				//��ʼ��
				chushihua(arr, hang, lie);
			    //��ӡ����
				display_Qipan(arr, hang, lie);
				while (1){
					//�������
					player_play(arr);
					display_Qipan(arr, hang, lie);

					printf("\n");
					printf("---------------------------------------------------");
					printf("\n");

					//��������
					computer_play(arr);
					display_Qipan(arr, hang, lie);

					char cha = who_win(arr, hang, lie);
					//������أ����ʾ���ʤ�����ߵ���ʤ������ƽ��
					if ('*' == cha || '#' == cha || 'e' == cha){
						panduan(cha);
						break;
					}
					//ͨ��who_win���ص��ַ������жϵĺ���
					
				}

				printf("\n");
				printf("���� 1 ����һ�ѣ����� 0 ������Ϸ\n");

			    break;

		    case 0:
			    //�˳���Ϸ
			    printf("�˳���Ϸ��");
			    break;

		    default :
			    printf("������ѡ�񣡣�\n");
				break;
		}

	} while (input);


	return 0;
}