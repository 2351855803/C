#include <stdio.h>

/*

	��дһ���������ӱ�׼�����ȡCԴ���룬����֤���еĻ����Ŷ���ȷ�ĳɶԳ���

*/

/*
	�жϻ����ŶԶ��ٿ��Գɶ�
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