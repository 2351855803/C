#include<stdio.h>
#include"Test.h"


int main(){

	//������������ȷ����С��Լ��
	//printf("%d\n", min_gongbeishu(9997, 444));

	//printf("%d\n", min_gongbeishu2(24,97));

	//����һ���ַ���
	char arr[] = "Hellow World! ��������sss aaabbbbccc !!@ dd";

	//���㣬�õ��������һ��Ԫ�ص�ָ��
	int size = sizeof(arr) / sizeof(arr[0]);
	char* right2 = arr + size - 1 - 1;
	
	//printf("%s\n", arr);
	my_exchange(arr, right2);
	printf("%s\n", arr);

	//�ҵ�ÿһ�����ʣ�Ȼ������ַ�������
	char* left = arr;
	char* right = left;
	while (*right != '\0'){

		while (*right != ' ' && *right != '\0'){
			right++;
		}
		//��ֹ���ұ���\0�������
		//if (*right != '\0'){
		//	my_exchange(left, right);
		//}
		//else{
		//	my_exchange(left, right-1);
		//}
		my_exchange(left, right - 1);
		//����λָ��ӣ���ֹ����������ѭ��\
		//������λָ���ʼ������һ������
		if (*right != '\0'){
			right++;
			left = right;
		}
		
		//������λָ���ʼ������һ������
		//left = right;

	}
	printf("---------------------------------------------------\n");
	printf("%s\n", arr);












	return 0;
}