#include<stdio.h>


//通过共用体来判断大端存储还是小端存储
int my_check(){

	//定义联合体,给i一个数，如果小端存储，数据低位存储在低地址位
	union U{
		char c;
		int i ;
	}unum;

	unum.i = 1;

	return unum.c;
}



int main(){

	//通过共用体来判断大端存储还是小端存储
	if (1 == my_check()){
		printf("小端存储！");
	}
	else{
		printf("大端存储！");
	}
	









	return 0;
}