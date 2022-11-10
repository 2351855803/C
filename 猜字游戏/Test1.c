#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//生成初始界面
void tuAn(){

	printf("*********************\n");
	printf("*********************\n");
	printf("***1.Play   2.Exit***\n");
	printf("*********************\n");
	printf("*********************\n");
}

void play(){
	
	//使用srand()，给rand()函数提供起始值,使用时间戳
	//生成一个随机数
	
	int randnum = rand();



	//猜测数字储存
	int num = 0;

	while (num != randnum){
		//让用户猜数字
		printf("\n请输入猜测的数字：\n");
		scanf_s("%d", &num);

		//判断数字
		if (randnum > num){
			printf("随机数大于输入数字！");
			printf("再来一次！");
		}
		else if (randnum < num){
			printf("随机数小于输入数字！");
			printf("再来一次！");
		}
		else if (randnum == num){
			printf("猜对数字了！！！！");
		}
	
	}
	


}
int main(){


	//随机数srand
	srand((unsigned int)time(NULL));

	//生成图案
	tuAn();

	//判断游戏进入
	int num = 0;
	scanf_s("%d", &num);

	//判断是否要继续游戏
	int num2 = 0;

	//进入游戏
	if (1 == num){
		do{
			play();
			printf("  再来一盘?\n");
			printf(" 1 -------> Yes \n");
			printf(" 0 -------> No \n");
			scanf_s("%d", &num2);
		} while (1 == num2);
		
		
	}//退出游戏
	else if (2 == num){
		printf("退出游戏！！");
	}//查看随机数 
	else if (3 == num){
		while (1){
			printf("%d\n", rand());
		}
		//printf("%d", rand());
	}//输入错误
	else{
		printf("输入错误！！！");
	}



	




	return 0;

}