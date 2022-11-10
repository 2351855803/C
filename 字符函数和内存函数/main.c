#define _CRT_SECURE_NO_WARNINGS 1;

#include<stdio.h>
#include<string.h>


//-------------------------------------------------------------------------------
																		//strcat


//void my_strcat(char* arr, const char* arr2){
//	
//	//计数
//	int count = 0;
//
//	//长度
//	int sz = strlen(arr);
//
//	//目标地址
//	arr = arr + sz;
	
	//找到目标的\0的地址
	/*while (0 != *(arr2 + count)){
		*(arr + sz + count) = *(arr2 + count);
		count++;
	}*/

	//优化
	//while (*(arr)++ = *(arr2)++){
	//	;
	//}

//}
//-------------------------------------------------------------------------------
																		//stecmp


//int my_strcmp(char* arr, char* arr2){
//
//	//判断长度
//	if (strlen(arr) != strlen(arr2)){
//		return 0;
//	}
//
//	//逐个比较
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
																		//模拟strstr

//char* my_strstr(const char* arr, const char* arr1){
//
//	//目标数组第一个字节地址
//	char* s1 = NULL;
//	//比较的数组第一个字节地址
//	char* s2 = NULL;
//	//记录的指针
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

	////先寻找被寻找字符串第一个字节在不在
	////提取被查找字符串第一个字节，在目标字符串中寻找


	////求长度
	//int sz = strlen(arr);
	//int sz1 = strlen(arr1);

	//while ( (*arr++ != *arr1)){
	//	//arr为\0跳出循环
	//	if (0 == *arr){
	//		return NULL;
	//	}
	//}
	////跳出while循环时,arr被加一了，所以要减一才是和arr1第一个字节相同地址
	//arr = arr - 1;
	////储存地址
	//char* add = arr;

	////判断
	//while (*(arr++) == *(arr1++)){
	//	//让arr1出去时候地址指向\0
	//	if (0 == *arr1){
	//		arr1 = arr1 - 1;
	//	}
	//}
	////返回字节地址
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
																			//模拟strstr
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