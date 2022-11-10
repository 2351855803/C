#include<stdio.h>
#include"game.h"
#include<time.h>
#include<stdlib.h>





int main(){

	//给srand函数加种子
	srand((unsigned int)time(NULL));

	//选择界面变量
	int input;

	//打印初始界面
	display_first();

	//定义二维数组
	char arr[hang][lie] = { 0 };


	//选择 ----------------> 1.进入游戏 0.退出 其他.重新选择
	do{
		printf("请输入选项：");
		scanf_s("%d", &input);
		switch (input){

		    case 1:
			    //进入游戏
			    printf("进入游戏！\n");
				printf("\n");
				printf("\n");

				//初始化
				chushihua(arr, hang, lie);
			    //打印棋盘
				display_Qipan(arr, hang, lie);
				while (1){
					//玩家下棋
					player_play(arr);
					display_Qipan(arr, hang, lie);

					printf("\n");
					printf("---------------------------------------------------");
					printf("\n");

					//电脑下棋
					computer_play(arr);
					display_Qipan(arr, hang, lie);

					char cha = who_win(arr, hang, lie);
					//如果返回，则表示玩家胜利或者电脑胜利或者平局
					if ('*' == cha || '#' == cha || 'e' == cha){
						panduan(cha);
						break;
					}
					//通过who_win返回的字符类型判断的函数
					
				}

				printf("\n");
				printf("输入 1 再来一把，输入 0 结束游戏\n");

			    break;

		    case 0:
			    //退出游戏
			    printf("退出游戏！");
			    break;

		    default :
			    printf("请重新选择！！\n");
				break;
		}

	} while (input);


	return 0;
}