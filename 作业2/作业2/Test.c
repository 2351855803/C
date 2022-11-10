#include<stdio.h>


//输入两个数，确定最小公约数
int min_gongbeishu(int num1, int num2){
	for (int i = 2; i <= num1; i++){

		//满足在进入
		if (0 == (num1 % i)){
			if (0 == (num2 % i)){
				return i;
			}
		}
	}
	return -1;

}

int min_gongbeishu2(int num1, int num2){
	for (int i = num1; i > 2; i--){

		//满足在进入
		if (0 == (num1 % i)){
			if (0 == (num2 % i)){
				return i;
			}
		}
	}
	return -1;

}

//倒置一个字符串
void my_exchange(char* arr, char* arr1){
	
	char* left = arr;
	char* right = arr1;
	//储存
	char temp = '0';
	
	while (left <= right){
		//交换
		temp = *right;
		*right = *left;
		*left = temp;

		left++;
		right--;

		
	}
}