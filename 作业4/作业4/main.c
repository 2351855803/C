#include<stdio.h>
#include<string.h>
//-----------------------------------------------------------------------------
																//�ַ�������

void left_move(char *arr, int num, int sz){
	//��ʱ��������
	char arr5[100] = { 0 };
	int count = 0;
	//�ֽ�ǰ�Ƶ���ʱ����
	int x = 0;
	//�������ĺ����洢��ȥ
	for (int i = 0; i < num; i++){
		//��ÿ���������ַ��洢���ַ�������
		arr5[count] = *(arr + i);
		count++;
	}
	//ÿ���ֽ�ǰ��num*sizeof(arr[0])���ֽ�
	//for (int i = 0; i < ; i++){
	//	*(arr + i) = *(arr + i + num);
	//}
	while (*(arr + x + num) != 0){
		*(arr + x) = *(arr + x + num);
		x++;
	}
	//����ʱ�����ֵ�Ž�ȥ
	x = 0;
	while (*(arr + (sz - 1 - num + x)) != 0){
		*(arr + (sz - 1 - num + x)) = *(arr5 + x);
		x++;
	}

}

//-----------------------------------------------------------------------------
											//�ж�һ���ַ����Ƿ�Ϊ��һ���ַ�������






int judge_left_move(char* arr1, char* arr2){


	//�󳤶�
	int s1 = strlen(arr1);
	int s2 = strlen(arr2);


	//��һ�֣����Ȳ�ͬ
	if (s1 != s2){
		return 0;
	}
	
	//����
	int count = 0;

	//����
	int i = 1;

	while (count != s1){
		left_move(arr1, i, s1 + 1);

		count++;
		//�ж�
		if (0 == strcmp(arr1, arr2)){
			printf("�ҵ�,������%d!", count );
			return count ;
		}
		

	}
	




	return 0;


}








int main(){

	//-----------------------------------------------------------------------------
	                                                              //�������Ͼ����Ƿ����Ī����
	
	/*1 2 3 4
	 2 3 4 5
	 3 4 5 6
	 4 5 6 7
	*/
	//int arr[4][4] = { {1,2,3,4}, {2,3,4,5}, {3,4,5,6}, {4,5,6,7} };
	////ȡԪ�ص��ֽڴ�С
	//int sz = sizeof(arr[0][0]);
	////�жϵ���
	//int num = 5;
	////����
	//int i = 0;
	////ȡָ����Ѱ��,arr����������Ԫ�ص�ַ����λ�����б�ʾ��һ��
	//while ( i != sizeof(arr)/sz-1 ){

	//	if ( *((int*)arr+i) == num){
	//		printf("�ҵ�%d", num);
	//		break;
	//	}
	//	i++;
	//}
	//if (i == sizeof(arr) / sz - 1){
	//	printf("�޷��ҵ�%d", num);
	//}
	
	//-----------------------------------------------------------------------------
																	//�ַ�������
	//char arr[] = "abcdef";
	////�����ĸ���
	//int num = 0;
	////�����ĺ���
	//int sz = sizeof(arr);
	//left_move(arr, num, sz);
	////��ӡ
	//printf("%s", arr);
	
	//-----------------------------------------------------------------------------
											//�ж�һ���ַ����Ƿ�Ϊ��һ���ַ�������

	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	
	printf("%d ", judge_left_move(arr1, arr2));
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;

}