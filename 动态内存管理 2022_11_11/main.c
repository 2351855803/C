#include<stdio.h>


int main(){

	//开辟十个整型空间
	/*int arr[10] = { 0 };*/
	
	//动态内存
	// p  == NULL/地址
	int* p = malloc(10 * sizeof(int));
	
	//查看地址
	for (int i = 0; i < 10; i++){
		printf("%p \n", p);
		p++;
	}

	//回收空间
	/*free(p);
	p = NULL;*/

	//给p的内存扩张到20个整型字节
	int* temp = (int*)realloc(p, 20 * sizeof(int));
	if (NULL != temp){
		p = temp;
	}
	
	




	return 0;
}