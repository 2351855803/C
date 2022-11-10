#include<stdio.h>




//打印一个数的二进制，并且判断数字1的个数
void printf_2(int i){
	//用与二进制隔断
	int count = 0;
	//用来判断数字1个数
	int count1 = 0;
	//储存二进制
	int arr[32] = { 0 };
	int n = 31;
	while (i != 0){
		arr[n] = i % 2;
		n--;
		i = i / 2;
	}
	//打印储存在数组里的二进制
	for (int i = 0; i < 32; i++){
		count++;
		printf("%d", arr[i]);
		//判断数字1个数
		if (1 == arr[i]){
			count1++;
		}
		//判断
		if (8 == count){
			printf(" ");
			count = 0;
		}

	}
	//隔断二进制和一的个数
	printf("\n");
	printf("\n");
	//printf("此二进制中，1的个数为%d", count1);
}






//判断一个数的二进制有多少个1
void judge_2(int num){
	//计数
	int count = 0;
	for (int i = 0; i < 32; i++){
		//num = num >> i;
		if (1 == ((num >> i) & 1)){
			count++;
		}
	}
	//printf("共有%d个1!!!", count);
}






//输入两个数，判断二进制中不同的个数有几个
int my_compare(int num1, int num2){
	//计数
	int count = 0;
	//通过右移来比较两个二进制数的bit相同？
	for (int i = 0; i < 32; i++){
		if ((1 & (num1 >> i)) != (1 & (num2 >> i))){
			count++;
		}

	}
	return count;


}
//输入两个数，判断二进制中不同的个数有几个-------->通过异或
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
//分别打印一个数的二进制位的奇数和偶数位
//15-----> 00000000 00000000 00000000 00001111
void my_printf3(int num){
	//打印偶数位
	printf("偶数位为:");
	for(int i = 31; i >= 0; i = i - 2){
		printf("%d ", ((num >> i) & 1));
	}
	printf("\n");
	//打印奇数位
	printf("奇数位为:");
	for (int i = 30; i >= 0; i = i - 2){
		printf("%d ", ((num >> i) & 1));
	}





}