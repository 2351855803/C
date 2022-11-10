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
#include<stdio.h>
#include<string.h>
#include"contact.h"



//打印函数
void my_print(){

	printf("**************************\n");
	printf("*1.add           2.del****\n");
	printf("*3.modification  4.search*\n");
	printf("*5.rank          6.print**\n");
	printf("*        0.exit          *\n");
	printf("**************************\n");
	
}

//初始化
void initial(Contact* contact){
	memset(contact->data, 0, sizeof(contact->data));
	contact->sz = 0;
}


//增加信息
void add_contact(Contact* contact){
	
	//通讯录满了的情况
	if (MAX_NUM == contact->sz){
		printf("通讯录已经满了！\n");
		return;
	}
	//存储信息
	printf("请输入名字:\n");
	scanf("%s", contact->data[contact->sz].name);
	printf("请输入年龄:\n");
	scanf("%d", &contact->data[contact->sz].age);
	printf("请输入性别:\n");
	scanf("%s", contact->data[contact->sz].sex);
	printf("请输入电话:\n");
	scanf("%s", contact->data[contact->sz].tel);
	printf("请输入地址:\n");
	scanf("%s", contact->data[contact->sz].addr);

	printf("录入成功");

	//数组下标加一
	contact->sz++;

}


//打印函数
void print_contact(const Contact* contact){
	//未录入
	if (0 == contact->sz){
		printf("没有数据！！\n");
	}
	//有几个信息就打印几个
	printf("姓名      年龄       性别       电话       地址\n");
	for (int i = 0; i < contact->sz; i++){
		//printf("*************************************\n");
		//printf("姓名为：%s\n", contact->data[i].name);
		//printf("年龄为：%d\n", contact->data[i].age);
		//printf("性别为：%s\n", contact->data[i].sex);
		//printf("电话为：%s\n", contact->data[i].tel);
		//printf("地址为：%s\n", contact->data[i].addr);
		//printf("*************************************\n");
		printf("%s        ", contact->data[i].name);
		printf("%d         ", contact->data[i].age);
		printf("%s         ", contact->data[i].sex);
		printf("%s         ", contact->data[i].tel);
		printf("%s         \n", contact->data[i].addr);

	}
}


//删除信息
void del_contact(Contact* contact){
	
	//临时查找的字符串的数组
	char temp[200] = { 0 };
	//确定是否删除的临时变量
	int temp_1 = 0;


	//判断通讯录是否为空
	if (0 == contact->sz){
		printf("无需删除\n");
		return;
	}

	//输入查找的名字
	printf("请输入名字:\n");
	scanf("%s", temp);

	//查找是否有这个人，通过名字
	for (int i = 0; i < contact->sz; i++){
		if (0 == strcmp(temp, contact->data[i].name)){
			printf("通讯录中存在此人！！\n");
			 
			//查找到后，删除
			printf("是否确定删除？（1/0）\n");
			scanf("%d", &temp_1);

			//判断情况
			if (temp_1){
				memset(&(contact->data[i]), 0, sizeof(contact->data[i]));
				printf("数据已经成功被删除！\n");
				rank_contact(contact,i);
				contact->sz--;
				return;
			}
			else{
				printf("该数据未被删除！\n");
				return;
			}

		}
	}
	printf("未查找到此人！！\n");


}


//查找信息
int sear_contact(Contact* contact){

	//临时查找的字符串的数组
	char temp[MAX_NAME] = { 0 };

	//输入查找的名字
	printf("请输入名字:\n");
	scanf("%s", temp);

	//查找是否有这个人，通过名字
	for (int i = 0; i < contact->sz; i++){
		if (0 == strcmp(temp, contact->data[i].name)){
			printf("通讯录中存在此人,在通讯录中第%d行\n", i + 1);
			return i;
		}
	}
	printf("不存在此人！\n");
	return -1;
}

//修改信息
void modif_contact(Contact* contact){

	//存在,定义变量接受下标
	int num = sear_contact(contact);

	//先查找存不存在
	if (0 != num){
		printf("输入信息不存在！\n");
	}

	//通过下标查找到修改的数组下标
	printf("修改参数！\n");
	printf("请输入名字:\n");
	scanf("%s", contact->data[num].name);
	printf("请输入年龄:\n");
	scanf("%d", &contact->data[num].age);
	printf("请输入性别:\n");
	scanf("%s", contact->data[num].sex);
	printf("请输入电话:\n");
	scanf("%s", contact->data[num].tel);
	printf("请输入地址:\n");
	scanf("%s", contact->data[num].addr);
	printf("修改成功！\n");
}

//如果信息已经被删除，则把他下一个信息前移
void rank_contact(Contact* contact,int begain){

	//把元素往前移动
	for (int i = begain; i < contact->sz; i++){
		contact->data[i] = contact->data[i + 1];
	}


}