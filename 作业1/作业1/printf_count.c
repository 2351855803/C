#include<stdio.h>




//��ӡһ�����Ķ����ƣ������ж�����1�ĸ���
void printf_2(int i){
	//��������Ƹ���
	int count = 0;
	//�����ж�����1����
	int count1 = 0;
	//���������
	int arr[32] = { 0 };
	int n = 31;
	while (i != 0){
		arr[n] = i % 2;
		n--;
		i = i / 2;
	}
	//��ӡ������������Ķ�����
	for (int i = 0; i < 32; i++){
		count++;
		printf("%d", arr[i]);
		//�ж�����1����
		if (1 == arr[i]){
			count1++;
		}
		//�ж�
		if (8 == count){
			printf(" ");
			count = 0;
		}

	}
	//���϶����ƺ�һ�ĸ���
	printf("\n");
	printf("\n");
	//printf("�˶������У�1�ĸ���Ϊ%d", count1);
}






//�ж�һ�����Ķ������ж��ٸ�1
void judge_2(int num){
	//����
	int count = 0;
	for (int i = 0; i < 32; i++){
		//num = num >> i;
		if (1 == ((num >> i) & 1)){
			count++;
		}
	}
	//printf("����%d��1!!!", count);
}






//�������������ж϶������в�ͬ�ĸ����м���
int my_compare(int num1, int num2){
	//����
	int count = 0;
	//ͨ���������Ƚ���������������bit��ͬ��
	for (int i = 0; i < 32; i++){
		if ((1 & (num1 >> i)) != (1 & (num2 >> i))){
			count++;
		}

	}
	return count;


}
//�������������ж϶������в�ͬ�ĸ����м���-------->ͨ�����
int my_compare2(int num1, int num2){
	//num1 ^ num2;
	int count = 0;
	//for (int i = 0; i < 32; i++){
	//	if (1 == (((num1 ^ num2) >> i) & 1)){

	//		count++;
	//	}
	//}
	int n = num1 ^ num2;
	while (n){
		n = n & (n - 1);
		count++; 


	}
	return count;

}


//=============================================================================
//�ֱ��ӡһ�����Ķ�����λ��������ż��λ
//15-----> 00000000 00000000 00000000 00001111
void my_printf3(int num){
	//��ӡż��λ
	printf("ż��λΪ:");
	for(int i = 31; i >= 0; i = i - 2){
		printf("%d ", ((num >> i) & 1));
	}
	printf("\n");
	//��ӡ����λ
	printf("����λΪ:");
	for (int i = 30; i >= 0; i = i - 2){
		printf("%d ", ((num >> i) & 1));
	}





}