#define _CRT_SECURE_NO_WARNINGS 1;

#include<stdio.h>
#include<string.h>


//-------------------------------------------------------------------------------
																		//strcat


//void my_strcat(char* arr, const char* arr2){
//	
//	//����
//	int count = 0;
//
//	//����
//	int sz = strlen(arr);
//
//	//Ŀ���ַ
//	arr = arr + sz;
	
	//�ҵ�Ŀ���\0�ĵ�ַ
	/*while (0 != *(arr2 + count)){
		*(arr + sz + count) = *(arr2 + count);
		count++;
	}*/

	//�Ż�
	//while (*(arr)++ = *(arr2)++){
	//	;
	//}

//}
//-------------------------------------------------------------------------------
																		//stecmp


//int my_strcmp(char* arr, char* arr2){
//
//	//�жϳ���
//	if (strlen(arr) != strlen(arr2)){
//		return 0;
//	}
//
//	//����Ƚ�
//	while ( *(arr) == *(arr2) && *arr != 0){
//		arr++;
//		arr2++;
//	}
//	if (0 == *arr && 0 == *arr2){
//		return 1;
//	}
//	else{
//		return 0;
//	}

//}
//-------------------------------------------------------------------------------
																		//ģ��strstr

//char* my_strstr(const char* arr, const char* arr1){
//
//	//Ŀ�������һ���ֽڵ�ַ
//	char* s1 = NULL;
//	//�Ƚϵ������һ���ֽڵ�ַ
//	char* s2 = NULL;
//	//��¼��ָ��
//	char* add = arr;
//
//	while (*add){
//
//		s1 = add;
//		s2 = arr1;
//
//		while ( *s1 && *s2 && (*s1 == *s2)){
//			s1++;
//			s2++;
//		}
//		if (0 == *s2){
//			return add;
//		}
//
//		add = add + 1;
//	}
//	return NULL;

	////��Ѱ�ұ�Ѱ���ַ�����һ���ֽ��ڲ���
	////��ȡ�������ַ�����һ���ֽڣ���Ŀ���ַ�����Ѱ��


	////�󳤶�
	//int sz = strlen(arr);
	//int sz1 = strlen(arr1);

	//while ( (*arr++ != *arr1)){
	//	//arrΪ\0����ѭ��
	//	if (0 == *arr){
	//		return NULL;
	//	}
	//}
	////����whileѭ��ʱ,arr����һ�ˣ�����Ҫ��һ���Ǻ�arr1��һ���ֽ���ͬ��ַ
	//arr = arr - 1;
	////�����ַ
	//char* add = arr;

	////�ж�
	//while (*(arr++) == *(arr1++)){
	//	//��arr1��ȥʱ���ַָ��\0
	//	if (0 == *arr1){
	//		arr1 = arr1 - 1;
	//	}
	//}
	////�����ֽڵ�ַ
	//if (0 == *arr1){
	//	return add;
	//}
	//else {
	//	return NULL;
	//}

//}

//-------------------------------------------------------------------------------

int main(){
	//-------------------------------------------------------------------------------
																			//strcat
	//char arr[20] = "Hello!";
	//char arr2[10] = "World!";
	///*printf("%s\n", arr);
	//strcat(arr, arr2);
	//printf("%s\n", arr);*/
	//my_strcat(arr, arr2);
	//printf("%s\n", arr);

	//-------------------------------------------------------------------------------
																			//stecmp

	//char arr[] = "abceeeeeeeqqqqd";
	//char arr2[] = "abceeeeeeeqqqqd";
	//printf("%d ", my_strcmp(arr, arr2));

	//-------------------------------------------------------------------------------
																			//strstr
	/*char arr[] = "abcdef";
	char arr1[] = "bcdeq";
	printf("%p\n", strstr(arr, arr1));
	printf("%p\n", arr + 1);*/

	//-------------------------------------------------------------------------------
																			//ģ��strstr
	//char arr[] = "aabcdef";
	//char arr1[] = "abcde";
	//printf("%p\n", my_strstr(arr, arr1));
	//printf("%p\n", arr);

	//-------------------------------------------------------------------------------
																			//strtok
	//char *p = "@.";
	//char arr1[] = "192@168.1.222.111@11112!!!!.3232";
	//char* temp = NULL;
	////printf("%s ",strtok(arr1, p));
	////printf("%s ", strtok(NULL, p));
	////printf("%s ", strtok(NULL, p));

	//for (temp = strtok(arr1, p); temp != NULL; temp = strtok(NULL,p)){
	//	printf("%s\n", temp);
	//}


	//-------------------------------------------------------------------------------
																		//strerror
	/*printf("%s ", strerror(5));*/
	//-------------------------------------------------------------------------------


	
	







	return 0;
}