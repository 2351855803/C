#include<stdio.h>


//������ַ����
struct Add{

	//���ƺ�
	int no;
	//����
	char arr[10];

};


//����ѧ������
struct Stu{
	//����
	char arr[10];
	//����
	int age;
	//��ַ
	struct Add add;

};

//��ӡѧ���Ļ�����Ϣ�ĺ���
void my_prinf(struct Stu s1){

	printf("ѧ��������Ϊ%s,����Ϊ%d,��ַΪ%d�ţ�%s��\n",s1.arr, s1.age, s1.add.no, s1.add.arr);



}
void test(){

}

int main(){

	//��ʼ��ѧ������
	struct Stu s1 = { "����", 20, { 99, "����" } };
	//��ӡѧ���Ļ�����Ϣ�ĺ���
	my_prinf(s1);
	s1.age = 100;
	my_prinf(s1);
	test();


	return 0;
}