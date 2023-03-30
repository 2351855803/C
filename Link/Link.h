#ifndef _LINK_H_
#define _LINK_H_


typedef struct Stu
{
    int num;
    char name[128];
    float score;

    struct Stu *next;

}STU;



extern STU* Insert_Link(STU* head, STU temp);
extern void Print_Link(STU *head);
extern STU *Search_Link(STU *head,char *search_name);
extern STU *Delete_Link(STU *head,int num);
extern STU *Free_Link(STU *head);
extern STU *Reverse_Link(STU *head);
extern void Sort_Link(STU *head);

#endif /* _LINK_H_ */