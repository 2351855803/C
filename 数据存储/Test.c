#include<stdio.h>

//�жϴ�˻���С�˴���
void my_judge(int num){
	char* p = (char*)&num;
	if (1 == (*p)){
		printf("С�˴洢");
	}
	else{
		printf("��˴洢");
	}





}