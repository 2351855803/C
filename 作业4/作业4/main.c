#include<stdio.h>
#include<string.h>
//-----------------------------------------------------------------------------
																//字符串左旋

void left_move(char *arr, int num, int sz){
	//临时储存数据
	char arr5[100] = { 0 };
	int count = 0;
	//字节前移的临时变量
	int x = 0;
	//把左旋的函数存储进去
	for (int i = 0; i < num; i++){
		//把每个左旋的字符存储在字符数组中
		arr5[count] = *(arr + i);
		count++;
	}
	//每个字节前移num*sizeof(arr[0])个字节
	//for (int i = 0; i < ; i++){
	//	*(arr + i) = *(arr + i + num);
	//}
	while (*(arr + x + num) != 0){
		*(arr + x) = *(arr + x + num);
		x++;
	}
	//把临时数组的值放进去
	x = 0;
	while (*(arr + (sz - 1 - num + x)) != 0){
		*(arr + (sz - 1 - num + x)) = *(arr5 + x);
		x++;
	}

}

//-----------------------------------------------------------------------------
											//判断一个字符串是否为另一个字符串左旋






int judge_left_move(char* arr1, char* arr2){


	//求长度
	int s1 = strlen(arr1);
	int s2 = strlen(arr2);


	//第一种，长度不同
	if (s1 != s2){
		return 0;
	}
	
	//计数
	int count = 0;

	//增加
	int i = 1;

	while (count != s1){
		left_move(arr1, i, s1 + 1);

		count++;
		//判断
		if (0 == strcmp(arr1, arr2)){
			printf("找到,左旋了%d!", count );
			return count ;
		}
		

	}
	




	return 0;


}








int main(){

	//-----------------------------------------------------------------------------
	                                                              //查找杨氏矩阵是否存在莫个数
	
	/*1 2 3 4
	 2 3 4 5
	 3 4 5 6
	 4 5 6 7
	*/
	//int arr[4][4] = { {1,2,3,4}, {2,3,4,5}, {3,4,5,6}, {4,5,6,7} };
	////取元素的字节大小
	//int sz = sizeof(arr[0][0]);
	////判断的数
	//int num = 5;
	////计数
	//int i = 0;
	////取指针来寻找,arr代表数组首元素地址，二位数组中表示第一行
	//while ( i != sizeof(arr)/sz-1 ){

	//	if ( *((int*)arr+i) == num){
	//		printf("找到%d", num);
	//		break;
	//	}
	//	i++;
	//}
	//if (i == sizeof(arr) / sz - 1){
	//	printf("无法找到%d", num);
	//}
	
	//-----------------------------------------------------------------------------
																	//字符串左旋
	//char arr[] = "abcdef";
	////左旋的个数
	//int num = 0;
	////左旋的函数
	//int sz = sizeof(arr);
	//left_move(arr, num, sz);
	////打印
	//printf("%s", arr);
	
	//-----------------------------------------------------------------------------
											//判断一个字符串是否为另一个字符串左旋

	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	
	printf("%d ", judge_left_move(arr1, arr2));
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;

}