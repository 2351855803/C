#include<stdio.h>

//创建书类型结构体
struct Book{
	
	//书名为 C语言程序设计
	char name[20];
	
	//价格为55
	short prcie;

	//出版社 北京出版社
	char chuban[20];
};


int main(){
	
	//调用Book类型
	struct Book book = {"C语言程序设计2", 55, "北京出版社"};

	//打印书名
	printf("书名为：%s\n", book.name);

	//打印价格
	printf("价格为：%d\n", book.prcie);

	//打印出版社
	printf("出版社为:%s\n", book.chuban);


	//打印char类型数组元素
	for (int i = 0; i < (sizeof(book.name) / sizeof(char)); i++){
		printf("第%d个元素为%c\n", i, book.name[i]);
	
	}

	//访问book地址
	struct Book* book1 = &book;   //面向对象 book为struct Book 类型变量
	printf("book的地址为：%p\n", book);

	//通过book1这个指针类型的地址来访问变量    !!记得地址要加()
	printf("%s\n", (*book1).chuban);
	printf("%s\n", (*book1).name);
	printf("%d\n", (*book1).prcie);


	printf("-----------------------------------------------------------\n");

	//通过   ->    来访问指针类型变量元素
	printf("%s\n", book1 -> chuban);
	printf("%s\n", book1 -> name);
	printf("%d\n", book1 -> prcie);


	//修改对象中的字符类型对象
	strcpy(book.name, "Java程序设计编程");
	printf("%s\n", book1->name);

	strcpy(book1 -> name, "修改名字!!!");
	printf("%s\n", book1->name);


	//char a = '?';
	//printf("%c", a);
	//a = '!';
	//printf("%c", a);



	return 0;

}