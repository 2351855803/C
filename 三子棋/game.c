#include<stdio.h>
#include"game.h"


//====================================================================================
    //��ʼ������
    void chushihua(char arr[hang][lie], int hang1, int lie1){
		for (int i = 0; i < hang1; i++){
			for (int j = 0; j < lie1; j++){

				arr[i][j] = 0;

			}
		}

	}

//====================================================================================
	//��ӡ����
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
	
    //��Ϸ����
	//�������
	void player_play(char arr[hang][lie]){
	
		//�洢�����Ҫ�±�
		int x = 0;
		int y = 0;

		//��������������*���ж��쳣
		while (1){
			printf("��������Ҫ�µ�λ�ã�");
			scanf_s("%d %d", &x, &y);
			if (arr[x - 1][y - 1] != 0){
				printf("������Ч�������λ���Ƿ������ӻ��߳������Χ����");
			}

			else{
				arr[x - 1][y - 1] = '*';				
				break;
			}
		}
	}
//====================================================================================
	//��������
	void computer_play(char arr[hang][lie]){
		//�洢������Ҫ�±�
		int x = 0;
		int y = 0;

		//ͨ��rand������x��y���ֵ
		x = rand() % 3;
		y = rand() % 3;

		while (1){
			//ͨ��rand������x��y���ֵ
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
	//�ж��ķ�ʤ��
	char who_win(char arr[hang][lie], int hang1, int lie1){
		//�������

		//�� ȫ����ͬ
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

		//�� ȫ����ͬ
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
		//�Խ��� ȫ��ͬ
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
		//ƽ��
		//for (int i = 0; i > hang; i++){
		//	for (int j = 0; j < lie; j++){
		//		if (arr[i][j])
		//	}
		//}


	}

	//�ж���һ��ʤ��
	//�涨
	//���� * ���ʤ��
	//���� # ����ʤ��
	//���� e ƽ��
	//�ж�
	void panduan(char cha){
		if ('*' == cha){
			printf("���ʤ����");
			
			
		}
		else if ('#' == cha){
			printf("����ʤ����");
			
		}
	}










//====================================================================================

    //��ӡ����
	  void display_first(){
		  printf("********************\n");
		  printf("********************\n");
		  printf("** 1.plat  0.exit **\n");
		  printf("********************\n");
		  printf("********************\n");
	  }


