#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//���ɳ�ʼ����
void tuAn(){

	printf("*********************\n");
	printf("*********************\n");
	printf("***1.Play   2.Exit***\n");
	printf("*********************\n");
	printf("*********************\n");
}

void play(){
	
	//ʹ��srand()����rand()�����ṩ��ʼֵ,ʹ��ʱ���
	//����һ�������
	
	int randnum = rand();



	//�²����ִ���
	int num = 0;

	while (num != randnum){
		//���û�������
		printf("\n������²�����֣�\n");
		scanf_s("%d", &num);

		//�ж�����
		if (randnum > num){
			printf("����������������֣�");
			printf("����һ�Σ�");
		}
		else if (randnum < num){
			printf("�����С���������֣�");
			printf("����һ�Σ�");
		}
		else if (randnum == num){
			printf("�¶������ˣ�������");
		}
	
	}
	


}
int main(){


	//�����srand
	srand((unsigned int)time(NULL));

	//����ͼ��
	tuAn();

	//�ж���Ϸ����
	int num = 0;
	scanf_s("%d", &num);

	//�ж��Ƿ�Ҫ������Ϸ
	int num2 = 0;

	//������Ϸ
	if (1 == num){
		do{
			play();
			printf("  ����һ��?\n");
			printf(" 1 -------> Yes \n");
			printf(" 0 -------> No \n");
			scanf_s("%d", &num2);
		} while (1 == num2);
		
		
	}//�˳���Ϸ
	else if (2 == num){
		printf("�˳���Ϸ����");
	}//�鿴����� 
	else if (3 == num){
		while (1){
			printf("%d\n", rand());
		}
		//printf("%d", rand());
	}//�������
	else{
		printf("������󣡣���");
	}



	




	return 0;

}