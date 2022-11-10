#include<stdio.h>
#include<assert.h>

//------------------------------------------------------------------
//模拟实现memcpy
void my_memcpy(void* arr1, const void* arr2, size_t num){

	assert(arr1 != NULL);
	assert(arr2 != NULL);

	while (num--){
		*((char*)arr2) = *((char*)arr1);
		
		/*(char*)arr2 = (char*)arr2 + 1;
		(char*)arr1 = (char*)arr1 + 1;*/

		arr1 = (char*)arr1 + 1;
		arr2 = (char*)arr2 + 1;

	
		
	}


	


}

int main(){

	//------------------------------------------------------------------
	//模拟实现memcpy
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 0 };

	my_memcpy(arr1, arr2, 17);

	for (int i = 0; i < 10; i++){
		printf("%d ", arr2[i]);
	}






	return 0;
}