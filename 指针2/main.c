#include<stdio.h>


////ͨ��ָ��������ַ�������
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












	////ָ������
	//int* arr[10] = { 0 };
	//int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	////���������Ԫ��ָ��
	//for (int i = 0; i < 10; i++){
	//	arr[i] = &arr1[i];
	//	printf("arrָ�������е�%d��Ԫ�صĵ�ַΪ%p,��arr1����%d\n", i, &arr1[i], arr1[i]);
	//}
	//printf("%d", *(arr[9]));//10








	//&������������������
	//int arr[10] = { 0 };
	//printf("%p\n", arr + 1);
	//printf("%p\n", &arr + 1);
	//012FFCC8
	//012FFCEC





	////ͨ��ָ��дһ�����ַ������ȵĺ���

	//char arr[] = "Hellow World!";

	//int leng = my_strleng(arr);

	//printf("�ַ�������Ϊ��%d\n",leng);










	////ָ���ȥָ��
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//printf("%d\n", &arr[9] - &arr[0]); //9




	////ͨ��ָ�������Ԫ�ؽ����޸�
	//int arr[20] = { 0 };
	//printf("%p\n", &arr);   //00B5F86C  int���Ͳ���Ϊ4
	////�޸ĵڶ���Ԫ��Ϊ10
	//int* pa = &arr;
	//printf("%d\n", arr[1]);
	//printf("---------------------------------------\n");
	//*(pa + 1) = 10;
	//*(pa + 19) = 10000;
	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
	//	printf("%d\n", arr[i]);

	//}






	//int a = 0x11223344;
	////�ֱ�ʹ��int����ָ���char����ָ��洢
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