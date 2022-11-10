#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>
#include"contact.h"

//通讯录
//1.存放1000人信息
//每个人信息
//姓名+年龄+性别+电话+地址
//2.增加人的信息
//3.删除指定人信息
//4.修改指定人信息
//5.查找指定人信息
//6.排序信息

//枚举，代替switch数字，增加可读性
enum options{
	exit, 
	add,
	del,
	modification,
	search,
	rank,
	print
};


int main(){
	//存储选择菜单的数
	int input = 0;

	//通信录变量数组
	Contact contact;
	
	//初始化函数
	initial(&contact); 

	
	do{
		//打印主菜单
		my_print();
		
		//输入选择
		printf("\n请选择功能：\n");
		scanf_s("%d", &input);

		//通过switch函数来判断所需要的功能
		switch(input){
			case add:
				//增加信息
				add_contact(&contact);
				break;
			case del:
				//删除信息
				del_contact(&contact);
				break;
			case modification:
				//修改个人信息
				modif_contact(&contact);
				break;
			case search:
				//查找信息
				sear_contact(&contact);	
				break;
			case rank:
				////如果信息已经被删除，则把他下一个信息前移
				//rank_contact(&contact);
				break;
			case print:
				//打印函数
				print_contact(&contact);
				break;
			default:
				printf("输入错误！");
				break;
		}

	} while (input);




	return 0;

}