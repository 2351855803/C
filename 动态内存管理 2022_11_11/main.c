#include<stdio.h>


int main(){

	//����ʮ�����Ϳռ�
	/*int arr[10] = { 0 };*/
	
	//��̬�ڴ�
	// p  == NULL/��ַ
	int* p = malloc(10 * sizeof(int));
	
	//�鿴��ַ
	for (int i = 0; i < 10; i++){
		printf("%p \n", p);
		p++;
	}

	//���տռ�
	/*free(p);
	p = NULL;*/

	//��p���ڴ����ŵ�20�������ֽ�
	int* temp = (int*)realloc(p, 20 * sizeof(int));
	if (NULL != temp){
		p = temp;
	}
	
	




	return 0;
}