//通讯录
//1.存放1000人信息
//每个人信息
//姓名+年龄+性别+电话+地址
//2.增加人的信息
//3.删除指定人信息
//4.修改指定人信息
//5.查找指定人信息
//6.排序信息
#define _CRT_SECURE_NO_WARNINGS 1;

//姓名 电话 性别 地址数组容量宏定义
#define MAX_NAME 20
#define MAX_TEL  20
#define MAX_SEX  10
#define MAX_ADDR  30
//通讯录数组个数
#define MAX_NUM 1000


//信息结构体定义
typedef struct Person{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
}Person;

//通讯录结构体
typedef struct Contact{
	//创建通讯录数组
	Person data[MAX_NUM];
	//有效值下标
	int sz;
}Contact;



//打印
void my_print();
//初始化
void initial(Contact* contact);
//增加信息
void add_contact(Contact* contact);
//打印函数
void print_contact(const Contact* contact);
//删除信息
void del_contact(Contact* contact);
//查找信息
int sear_contact(Contact* contact);
//修改信息
void modif_contact(Contact* contact);
//如果信息已经被删除，则把他下一个信息前移
void rank_contact(Contact* contact, int begain);


