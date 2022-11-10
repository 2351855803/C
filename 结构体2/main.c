#include<stdio.h>


//创建地址类型
struct Add{

	//门牌号
	int no;
	//城市
	char arr[10];

};


//创建学生类型
struct Stu{
	//姓名
	char arr[10];
	//年龄
	int age;
	//地址
	struct Add add;

};

//打印学生的基本信息的函数
void my_prinf(struct Stu s1){

	printf("学生的姓名为%s,年龄为%d,地址为%d号，%s市\n",s1.arr, s1.age, s1.add.no, s1.add.arr);



}
void test(){

}

int main(){

	//初始化学生对象
	struct Stu s1 = { "张三", 20, { 99, "北京" } };
	//打印学生的基本信息的函数
	my_prinf(s1);
	s1.age = 100;
	my_prinf(s1);
	test();


	return 0;
}