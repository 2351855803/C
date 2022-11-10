#include<stdio.h>

void bubble(int arr[], int size){

	for (int i = 0; i < size - 1; i++){

		for (int j = 0; j < size - 1 - i; j++){

			if (arr[j] > arr[j + 1]){

				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}

		}
	}



}



int main(){

	int arr[] = {56,8,58,66,997,32,4123,356,823,5,65,923,56};
	
	//计算长度
	int size = sizeof(arr) / sizeof(arr[0]);

	//利用冒泡排序函数对数列进行升序排列
	bubble(arr,size);

	for (int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}





	return 0;
}