//棋盘宽度
#define hang 3
//棋盘长度
#define lie 3





//函数声明

//打印初始界面
void display_first();
//打印棋盘
void display_Qipan(char arr[hang][lie], int hang1, int lie1);
//初始化
void chushihua(char arr[hang][lie], int hang1, int lie1);
//玩家下棋
void player_play(char arr[hang][lie]);
//电脑下棋
void computer_play(char arr[hang][lie]);
//判断谁胜利
char who_win(char arr[hang][lie], int hang1, int lie1);
//通过who_win返回的字符类型判断的函数
void panduan(char cha);

