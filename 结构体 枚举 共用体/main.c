#include<stdio.h>


//ͨ�����������жϴ�˴洢����С�˴洢
int my_check(){

	//����������,��iһ���������С�˴洢�����ݵ�λ�洢�ڵ͵�ַλ
	union U{
		char c;
		int i ;
	}unum;

	unum.i = 1;

	return unum.c;
}



int main(){

	//ͨ�����������жϴ�˴洢����С�˴洢
	if (1 == my_check()){
		printf("С�˴洢��");
	}
	else{
		printf("��˴洢��");
	}
	









	return 0;
}