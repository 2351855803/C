#include<stdio.h>

//���������ͽṹ��
struct Book{
	
	//����Ϊ C���Գ������
	char name[20];
	
	//�۸�Ϊ55
	short prcie;

	//������ ����������
	char chuban[20];
};


int main(){
	
	//����Book����
	struct Book book = {"C���Գ������2", 55, "����������"};

	//��ӡ����
	printf("����Ϊ��%s\n", book.name);

	//��ӡ�۸�
	printf("�۸�Ϊ��%d\n", book.prcie);

	//��ӡ������
	printf("������Ϊ:%s\n", book.chuban);


	//��ӡchar��������Ԫ��
	for (int i = 0; i < (sizeof(book.name) / sizeof(char)); i++){
		printf("��%d��Ԫ��Ϊ%c\n", i, book.name[i]);
	
	}

	//����book��ַ
	struct Book* book1 = &book;   //������� bookΪstruct Book ���ͱ���
	printf("book�ĵ�ַΪ��%p\n", book);

	//ͨ��book1���ָ�����͵ĵ�ַ�����ʱ���    !!�ǵõ�ַҪ��()
	printf("%s\n", (*book1).chuban);
	printf("%s\n", (*book1).name);
	printf("%d\n", (*book1).prcie);


	printf("-----------------------------------------------------------\n");

	//ͨ��   ->    ������ָ�����ͱ���Ԫ��
	printf("%s\n", book1 -> chuban);
	printf("%s\n", book1 -> name);
	printf("%d\n", book1 -> prcie);


	//�޸Ķ����е��ַ����Ͷ���
	strcpy(book.name, "Java������Ʊ��");
	printf("%s\n", book1->name);

	strcpy(book1 -> name, "�޸�����!!!");
	printf("%s\n", book1->name);


	//char a = '?';
	//printf("%c", a);
	//a = '!';
	//printf("%c", a);



	return 0;

}