#include<stdio.h>

int add(int num1, int num2){
	int sum = num1 + num2;
	return sum;
}


int main(){

	printf("得到的结果为：%d\n", add(300, 100));


	return 0;
}