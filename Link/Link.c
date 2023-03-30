#include <stdio.h>
#include <stdlib.h>
#include "Link.h"
#include <string.h>

#if 0
//头部之前插入
STU* Insert_Link(STU* head, STU temp)
{
    STU *point = (STU*)calloc(1,sizeof(temp));
    if( point == NULL)
    {
        perror("calloc");
        //直接结束进程
        exit(-1);
    }
    //将temp数据复制到*point
    *point = temp;
    point ->next = NULL;


    //判断链表是否存在
    if(head == NULL)//链表不存在
    {
        head = point;
    }
    else //之前已经存在链表
    {
        point ->next = head;
        head = point;   
    }
    return head;
}
#endif
#if 0
//尾部插入
STU* Insert_Link(STU* head, STU temp)
{
    STU *temp_head = head;
    STU *point = (STU*)calloc(1,sizeof(temp));
    if( point == NULL)
    {
        perror("calloc");
        //直接结束进程
        exit(-1);
    }
    //将temp数据复制到*point
    *point = temp;
    point ->next = NULL;


    //判断链表是否存在
    if(head == NULL)//链表不存在
    {
        head = point;
    }
    else //之前已经存在链表
    {
       while(temp_head->next != NULL)
       {
            temp_head = temp_head->next;
       }
       temp_head->next = point;
    }
    return head;
}
#endif


STU* Insert_Link(STU* head, STU temp)
{
    //开辟堆区空间
    STU *point = (STU*)calloc(1,sizeof(temp));
    //判断是否开辟成功
    if(NULL == point)
    {
        printf("开辟失败\n");
        exit(-1);
    }

    *point = temp;

    //判断是否有链表
    if(NULL == head)
    {
        head = point;
        point ->next = NULL;
    }
    else
    {
        point->next = head;
        head = point;
    }
    return head;
}



#if 0
//尾部插入
STU* Insert_Link(STU* head, STU temp)
{
    //开辟空间并且判断是否开辟成功，并且把结构体穿进去
    STU *point = (STU*)calloc(1,sizeof(temp));
    if(NULL == point)
    {
        exit(-1);
    }
    *point = temp;
    //  point->next = NULL;

    //判断是否存在链表节点，如果没有则插入
    if(NULL == head)
    {
        head = point;
    }
    else
    {
        STU *temp_head = head;
        //找到最后一个节点
        while(temp_head->next != NULL)
        {
            temp_head = temp_head->next;
        }
        temp_head->next = point;
        point->next = NULL;
    }
    return head;
}
#endif

//选择排序插入
#if 0
STU* Insert_Link(STU* head, STU temp)
{
    STU *point = (STU*)calloc(1,sizeof(temp));
    STU *temp_head = head;
    STU *temp_point = head;
    if(NULL == point)
    {
        exit(-1);
    }
    else
    {
        *point = temp;
        if(NULL == head)
        {
            head = point;
            point->next = NULL;
        }
        else 
        {
            while((point ->num > temp_head->num) && (temp_head->next != NULL))
            {
                temp_point = temp_head;
                temp_head = temp_head->next;
            }

            //头部插入
            if(temp_head->num >=  point->num)
            {
                if(temp_head ==  head)
                {
                    point->next = head;
                    head = point;
                }
                else
                {
                    point->next = temp_point->next;
                    temp_point->next = point;                    
                }

            }
            else
            {
                temp_head->next = point;
                point ->next = NULL;
            }

        }
    }
    return head;
}
#endif

//查询
STU *Search_Link(STU *head,char *search_name)
{
    if(NULL == head)
    {
        printf("链表不存在 \n");
        return NULL;    
    }
    STU *temp_head = head;
    while( temp_head ->next != NULL)
    {
        if(0 == strcmp(search_name,temp_head->name))
        {
            return temp_head;
        }

        temp_head = temp_head->next;
    }
    return NULL;
}


//遍历
void Print_Link(STU *head)
{
    STU *print_point = head;
    if(NULL == print_point)
    {
        printf("链表不存在\n");
        printf("--------------------------------------\n");
    }
    else
    {
        while(NULL != print_point)
        {
            printf("当前的号码为%d: \n",print_point->num);
            printf("当前的姓名为%s: \n",print_point->name);
            printf("当前的号码为%f: \n",print_point->score);
            printf("--------------------------------------\n");
            print_point = print_point->next;
        }
    }
}





//删除节点
STU *Delete_Link(STU *head,int num)
{
    STU *temp_head = head;
    STU *temp_point = head;

    //判断节点是否存在
    if( NULL == head)
    {
        printf("链表不存在 \n");
        return head;
    }
    else
    {
        while( (temp_head ->num != num) && (temp_head->next != NULL) )
        {
            temp_point = temp_head;
            temp_head = temp_head->next;
        }
        //当到达这里两个情况，找到了数字说着最后一个节点的时候，next为NULL
        if(temp_head ->next != NULL)
        {
            //头部删除
            if(temp_head == head)
            {
                printf("头部删除 \n");
                head = temp_head ->next;
                free(temp_head);
                temp_head = NULL;
                printf("头部删除完成 \n");

            }
            else
            {
                printf("中间删除 \n");
                temp_point->next = temp_head->next;
                free(temp_head);
                temp_head = NULL;
                printf("中间删除完成 \n");
            }
        }
        else //这里是尾部，到达这里要么尾部是，要么不存在
        {
            if(num != temp_head->num)
            {
                printf("输入的序号不存在 \n");
            }
            else
            {
                //说明剩下一个
                if(temp_head = temp_point)
                {
                    printf("剩下一个节点 \n");

                    free(temp_head);
                    temp_head = NULL;
                    printf("尾部删除完成 \n");
                    head = NULL;
                }
                else
                {
                    temp_point->next = NULL;
                    free(temp_head);
                    temp_head = NULL;
                    printf("尾部删除完成 \n");                    
                }

            }
        }

    }
    return head;
}

STU *Free_Link(STU *head)
{

    STU *temp_head = head;
    if( NULL == head)
    {
        printf("链表不存在 \n");
        return head;
    }
    else 
    {
        while( temp_head != NULL)
        {
            head = temp_head->next;
            free(temp_head);
            temp_head = head;

        }
    }
    printf("释放完成！\n");
    return head;
}



STU *Reverse_Link(STU *head)
{

    if( NULL == head)
    {
        printf("链表不存在 \n");
    }
    else
    {
        printf("开始反转 \n");
        STU *p1 = head->next;
        head ->next = NULL;
        STU *p2 = NULL;

        while( p1 != NULL)
        {
            p2 = p1 ->next;
            p1->next = head;
            head = p1;
            p1 = p2;
           
        }
    }
    return head;
}


void Sort_Link(STU *head)
{

    if(NULL == head)
    {
        printf("无节点 \n");
        return;
    }

    STU *i = head, *j = head;//int i = 0, j = 0;
    STU * min = head;
    while( i->next != NULL )//for(i = 0; i < n-1; i++)
    {
        min = i;
        j = min->next;
        while( j != NULL )//for(j = min+1; j < n; j++)
        {
            if(min->num > j->num )
            {
                min = j;
            }
            j = j->next;
        }
        if( min != i)
        {
            STU temp = *min;
            *min = *i;
            *i = temp;

            i->next = min->next;
            min->next = temp.next;


        }  
        i = i->next;
    }
}