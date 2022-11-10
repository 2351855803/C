#include<stdio.h>



int string_length(char* arr){

	int count = 0;


	while (*arr != '\0');
	{
		count++;
		arr = arr + 1;
		//string_length(arr);

	}

	return count;

}


int main(){


	char arr[] = "Hello World";      
	int len = string_length(arr);  //传过去的是第一个元素地址
	printf("%d\n", len);

	return 0;
}
