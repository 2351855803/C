#include<stdio.h>

//ÅÐ¶Ï´ó¶Ë»¹ÊÇÐ¡¶Ë´¢´æ
void my_judge(int num){
	char* p = (char*)&num;
	if (1 == (*p)){
		printf("Ð¡¶Ë´æ´¢");
	}
	else{
		printf("´ó¶Ë´æ´¢");
	}





}