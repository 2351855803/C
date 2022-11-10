#include<stdio.h>
#include"game.h"


//====================================================================================
    //初始化棋盘
    void chushihua(char arr[hang][lie], int hang1, int lie1){
		for (int i = 0; i < hang1; i++){
			for (int j = 0; j < lie1; j++){

				arr[i][j] = 0;

			}
		}

	}

//====================================================================================
	//打印棋盘
    void display_Qipan(char arr[hang][lie], int hang1, int lie1){
		

		for(int i = 0; i < hang1; i++){

			for (int j = 0; j < lie1; j++){

				if (j == lie1 - 1){
					printf(" %c ", arr[i][j]);
					break;
				}

				printf(" %c |", arr[i][j]);

			}

			if (i == hang1 - 1){
				break;
			}	
			printf("\n");
			for (int k = 0; k < lie1; k++){
				if (k == lie1 - 1){
					printf("---");
					break;
				}
				printf("---|");
				
			}
			printf("\n");
		}


		printf("\n");

	}

//====================================================================================
	
    //游戏函数
	//玩家下棋
	void player_play(char arr[hang][lie]){
	
		//存储玩家所要下标
		int x = 0;
		int y = 0;

		//把输入的坐标放入*，判断异常
		while (1){
			printf("请输入所要下的位置：");
			scanf_s("%d %d", &x, &y);
			if (arr[x - 1][y - 1] != 0){
				printf("输入无效！请检查此位置是否有棋子或者超出最大范围！！");
			}

			else{
				arr[x - 1][y - 1] = '*';				
				break;
			}
		}
	}
//====================================================================================
	//电脑下棋
	void computer_play(char arr[hang][lie]){
		//存储电脑所要下标
		int x = 0;
		int y = 0;

		//通过rand函数给x，y随机值
		x = rand() % 3;
		y = rand() % 3;

		while (1){
			//通过rand函数给x，y随机值
			x = rand() % 3;
			y = rand() % 3;
			if (arr[x][y] == 0){
				arr[x][y] = '#';
				break;
			}
			
		}
		arr[x][y] = '#';



	}

//====================================================================================
	//判断哪方胜利
	char who_win(char arr[hang][lie], int hang1, int lie1){
		//三种情况

		//横 全部相同
		for (int i = 0; i < hang; i++){
			if ((arr[i][0] == arr[i][1] && arr[i][2] == arr[i][0]) && arr[i][0] != 0){
				if (arr[i][0] == '*'){
					return '*';
				}
				else if (arr[i][0] == '#'){
					return '#';
				}
			}
		}

		//竖 全部相同
		for (int i = 0; i < lie; i++){
			if ((arr[0][i] == arr[1][i] && arr[2][i] == arr[0][i]) && arr[0][i] != 0){
				if (arr[0][i] == '*'){
					return '*';
				}
				else if (arr[0][i] == '#'){
					return '#';
				}
			}
		}
		//对角线 全相同
		if ((arr[0][0] == arr[1][1] && arr[2][2] == arr[0][0] && arr[1][1] == arr[2][2]) && arr[0][0] != 0){
			if (arr[0][0] == '*'){
				return '*';
			}
			else if (arr[0][0] == '#'){
				return '#';
			}
		}
		else if ((arr[0][2] == arr[1][1] && arr[2][0] == arr[0][2] && arr[1][1] == arr[2][0]) && arr[0][2] != 0){
			if (arr[0][2] == '*'){
				return '*';
			}
			else if (arr[0][2] == '#'){
				return '#';
			}
		}
		//平局
		//for (int i = 0; i > hang; i++){
		//	for (int j = 0; j < lie; j++){
		//		if (arr[i][j])
		//	}
		//}


	}

	//判断哪一方胜利
	//规定
	//返回 * 玩家胜利
	//返回 # 电脑胜利
	//返回 e 平局
	//判断
	void panduan(char cha){
		if ('*' == cha){
			printf("玩家胜利！");
			
			
		}
		else if ('#' == cha){
			printf("电脑胜利！");
			
		}
	}










//====================================================================================

    //打印函数
	  void display_first(){
		  printf("********************\n");
		  printf("********************\n");
		  printf("** 1.plat  0.exit **\n");
		  printf("********************\n");
		  printf("********************\n");
	  }


