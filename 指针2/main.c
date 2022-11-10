#include<stdio.h>


////通过指针相减求字符串长度
//int my_strleng(char* arr){
//
//	char* start = arr;
//	char* end = arr;
//
//	while ((*end) != '\0'){
//		end = end + 1;
//	}
//
//	return end - start;

//}



int main(){












	////指针数组
	//int* arr[10] = { 0 };
	//int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	////求数组各个元素指针
	//for (int i = 0; i < 10; i++){
	//	arr[i] = &arr1[i];
	//	printf("arr指针数组中第%d个元素的地址为%p,在arr1中是%d\n", i, &arr1[i], arr1[i]);
	//}
	//printf("%d", *(arr[9]));//10








	//&数组名和数组名区别
	//int arr[10] = { 0 };
	//printf("%p\n", arr + 1);
	//printf("%p\n", &arr + 1);
	//012FFCC8
	//012FFCEC





	////通过指针写一个求字符串长度的函数

	//char arr[] = "Hellow World!";

	//int leng = my_strleng(arr);

	//printf("字符串长度为：%d\n",leng);










	////指针减去指针
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//printf("%d\n", &arr[9] - &arr[0]); //9




	////通过指针对数组元素进行修改
	//int arr[20] = { 0 };
	//printf("%p\n", &arr);   //00B5F86C  int类型步长为4
	////修改第二个元素为10
	//int* pa = &arr;
	//printf("%d\n", arr[1]);
	//printf("---------------------------------------\n");
	//*(pa + 1) = 10;
	//*(pa + 19) = 10000;
	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
	//	printf("%d\n", arr[i]);

	//}






	//int a = 0x11223344;
	////分别使用int类型指针和char类型指针存储
	//int* pa = &a;
	//char* pa1 = &a;

	//printf("%p\n", pa);
	//printf("%p\n", pa + 1);
	//printf("%p\n", pa1);
	//printf("%p\n", pa1 + 1);

	//00BAFB68
	//00BAFB6C
	//00BAFB68
	//00BAFB69



	return 0;
}