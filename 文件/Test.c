#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
//fgetc 从文件读取信息
//int main()
//{
//	
//	FILE *p = fopen("Test.dat","r");
//	if (NULL == p)
//	{
//		printf("Erroe \n");
//	}
//	else
//	{
//		printf("OK \n");
//		
//		int num = fgetc(p);
//		printf("%c \n",num);
//		num = fgetc(p);
//		printf("%c \n", num);
//		num = fgetc(p);
//		printf("%c \n", num);
//	}
//
//
//	fclose(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//fgetc 从标准输入流读取信息
//	int num = fgetc(stdin);
//	printf("%c \n", num);
//	num = fgetc(stdin);
//	printf("%c \n", num);
//	num = fgetc(stdin);
//	printf("%c \n", num);
//
//
//	system("pause");
//	return 0;
//}

// fputs fgets
//int main()
//{
//	//fgets 从标准输入流读取信息
//	FILE *p = fopen("Test.dat", "r");
//
//	char arr[6] = { 0 };
//	
//	if (NULL == p)
//	{
//		printf("Error! \n");
//		return 1;
//	}
//	else
//	{
//		printf("OK \n");
//		fputs("q12345 \n",p);
//		fgets(arr, 5, p);
//		printf("%s \n" ,arr);
//	}
//	
//	fclose(p);
//	p = NULL;
//
//
//	system("pause");
//	return 0;
//}


struct Person
{
	int age;
	float weight;
	char name;
};

int main()
{
	
	FILE *p = fopen("Test.dat", "w");

	struct Person P1 = { 60, 5.55, 'c' };

	if (NULL == p)
	{
		printf("Error! \n");
		return 1;
	}
	else
	{
		fprintf(p," %d %c %f ",P1.age,P1.name,P1.weight);
		printf("WriteOk!!!\n");
	}

	fclose(p);
	p = NULL;


	system("pause");
	return 0;
}