#include <stdio.h>
#include <string.h>
#include "Link.h"

STU *head = NULL;

void Interface()
{
    printf("**************************\n");
    printf("**help:帮助信息         **\n");
    printf("**insert:插入节点       **\n");
    printf("**print:遍历节点        **\n");
    printf("**search:查询某个节点   **\n");
    printf("**delete:删除某个节点   **\n");
    printf("**free:释放链表         **\n");
    printf("**quite:退出            **\n");
    printf("**reverse:反转          **\n");
    printf("**sort:排序             **\n");
    printf("**************************\n");
}



int main(int argc, char const *argv[])
{
    

    Interface();

    do
    {
        char option[128] = "";
        printf("请输入选项: \n");
        scanf("%s",option);
        if( 0 == strcmp(option,"help") )
        {
            printf("----------帮助------------ \n");
        }
        else if( 0 == strcmp(option,"insert") )
        {
            STU temp;
            printf("----------链表节点插入------------ \n");
            printf("请输入插入的信息: \n");
            scanf("%d %s %f",&temp.num,temp.name,&temp.score);

            head = Insert_Link(head,temp);
            
            printf("----------链表信息插入成功------------ \n");

        }
        else if( 0 == strcmp(option,"print") )
        {
            printf("----------链表遍历------------ \n");
            Print_Link(head);
        }
        else if( 0 == strcmp(option,"search") )
        {
            char search_name[128] = "";
            printf("----------链表查询------------ \n");
            printf("请输入要查找的姓名：\n");
            scanf("%s",search_name);
            STU *temp = Search_Link(head,search_name); 
            if(NULL == temp)
            {
                printf("未查询到此人 \n");
            }
            else
            {
                printf("信息为 %s %d %f \n",temp->name,temp->num,temp->score);
            }
        }  
        else if( 0 == strcmp(option,"delete") )
        {
            int num = 0;
            printf("----------链表指定节点删除------------ \n");
            printf("请输入要删除的学号: \n");
            scanf("%d",&num);
            head = Delete_Link(head,num);
        }    
        else if( 0 == strcmp(option,"free") )
        {
            printf("----------释放链表------------ \n");
            head = Free_Link(head);
        }  
        else if( 0 == strcmp(option,"quite") )
        {
            printf("quite \n");
            head = Free_Link(head);
            break;
        }  
        else if( 0 == strcmp(option,"reverse") )
        {
            printf("reverse \n");
            head = Reverse_Link(head);
            
        }  
        else if( 0 == strcmp(option,"sort") )
        {
            printf("sort \n");
            Sort_Link(head);
            
        }  
    } while (1);
    
    return 0;
}
