
//库函数头文件调用用<>
#include<stdio.h>
//自己定义的函数的头文件调用用""
#include"add.h"
#include"minus.h"

int main(){
	printf("%d\n", add(200, 300));
	printf("%d\n", minus(900, 300));

}
