#include<stdio.h>


//������������ȷ����С��Լ��
int min_gongbeishu(int num1, int num2){
	for (int i = 2; i <= num1; i++){

		//�����ڽ���
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

		//�����ڽ���
		if (0 == (num1 % i)){
			if (0 == (num2 % i)){
				return i;
			}
		}
	}
	return -1;

}

//����һ���ַ���
void my_exchange(char* arr, char* arr1){
	
	char* left = arr;
	char* right = arr1;
	//����
	char temp = '0';
	
	while (left <= right){
		//����
		temp = *right;
		*right = *left;
		*left = temp;

		left++;
		right--;

		
	}
}