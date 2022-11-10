#include<stdio.h>
#include"Test.h"


int main(){

	//输入两个数，确定最小公约数
	//printf("%d\n", min_gongbeishu(9997, 444));

	//printf("%d\n", min_gongbeishu2(24,97));

	//倒置一个字符串
	char arr[] = "Hellow World! ！！！！sss aaabbbbccc !!@ dd";

	//计算，得到数组最后一个元素的指针
	int size = sizeof(arr) / sizeof(arr[0]);
	char* right2 = arr + size - 1 - 1;
	
	//printf("%s\n", arr);
	my_exchange(arr, right2);
	printf("%s\n", arr);

	//找到每一个单词，然后进行字符串倒序
	char* left = arr;
	char* right = left;
	while (*right != '\0'){

		while (*right != ' ' && *right != '\0'){
			right++;
		}
		//防止最右边是\0导致溢出
		//if (*right != '\0'){
		//	my_exchange(left, right);
		//}
		//else{
		//	my_exchange(left, right-1);
		//}
		my_exchange(left, right - 1);
		//右限位指针加，防止继续进入死循环\
		//把左限位指针初始化到下一个单词
		if (*right != '\0'){
			right++;
			left = right;
		}
		
		//把左限位指针初始化到下一个单词
		//left = right;

	}
	printf("---------------------------------------------------\n");
	printf("%s\n", arr);












	return 0;
}