#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Interface()
{
    printf("*******加密******\n");
    printf("*******解密******\n");
    printf("*******离开******\n");

}

//全局变量，让解锁也可以用
int true_code = 0;

void Lock()
{
    //存储加密内容
    unsigned char text[128] = "";
    //通过字符串存储密码
    unsigned char code[20] = "";
    
    //要加密的文件
    FILE *p = fopen("a.txt","w");
    //机密后放的文件
    FILE *p1 = fopen("b.txt","w");

    if( p == NULL )
    {
        perror("fopen");
        return;
    }
    if( p1 == NULL )
    {
        perror("fopen");
        return;
    }

    printf("请输入加密的内容：\n");
    scanf("%s",text);
    printf("请设置密码：\n");
    scanf("%s",code);

    //解包，字符串转换为整型
    sscanf(code,"%d",&true_code);
    //文件组包，把text数组内容放到文件a.txt
    fprintf(p,"%s",text);

    //加密
    int len = strlen(text);
    int i = 0;
    for(i = 0; i < len; i++)
    {
        *(text+i) += true_code;
    }

    //把加密后的数据放到b.txt
    fprintf(p1,"%s",text);

    printf("加密成功！ \n");

    fclose(p);
    fclose(p1);

}


void Unlock()
{
    //解锁需要输入的密码
    int input_code = 0;
    do
    {
        printf("请输入密码: \n");
        scanf("%d",&input_code);
        if( true_code == input_code )
        {
            printf("密码正确！ \n");
            break;
        }
        else
        {
            printf("密码错误,请重新输入！ \n");
        }

    } while (1);

    FILE *p = fopen("b.txt","r+");
    if( p == NULL )
    {
        perror("fopen");
        return;
    }
    FILE *p1 = fopen("c.txt","w");
    if( p1 == NULL )
    {
        perror("fopen");
        return;
    }   

    //保存从b.txt拿来的数据
    char save_text[128] = "";
    //解包，通过字符串形式放到数组
    fscanf(p,"%s",save_text);

    //开始解密
    int len = strlen(save_text);
    int i = 0;
    for(i = 0; i < len; i++)
    {
        *(save_text+i) -= true_code;
    }
    fprintf(p1,"%s",save_text);
    printf("解密完成！ \n");

    fclose(p);
    fclose(p1);

    
}

int main(int argc, char const *argv[])
{
    unsigned char option[20] = "";

    do
    {
        Interface();
        scanf("%s",option);
        
        if( strcmp(option,"加密") == 0)
        {
            Lock();
        }
        if( strcmp(option,"解密") == 0)
        {
            Unlock();
        }
        if( strcmp(option,"离开") == 0)
        {
            break;
        }

    } while (1);
    


    return 0;
}
