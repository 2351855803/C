#include <stdio.h>

/*

	编写一个程序，它从标准输入读取C源代码，并验证所有的花括号都正确的成对出现

*/

/*
	判断花括号对多少可以成对
*/
int main()
{

	char x = 0;
	int count = 0;

	while ((x = getchar()) != EOF)
	{
		if (x == '{')
		{
			count = 1;
		}
		if (x == '}' && count == 0)
		{
			printf("error+1\n");
			count = 0;
		}
		else if (x == '}' && count == 1)
		{
			printf("successful+1\n");
			count = 0;
		}

	
	}



	system("pause");
	return 0;
}