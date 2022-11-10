#include<stdio.h>



int main(){

	int num1;
	int num2;

	scanf_s("%d%d", &num1, &num2);


	
	int sum = num1 + num2;
	printf("sum = %d + %d = %d\n", num1, num2, sum);

	return 0;

}