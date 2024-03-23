#include<stdio.h>
int main(void)
{
int grade=0;
printf("Please enter your grade: \n");
scanf("%d",&grade);
if(grade<0 && grade>100)
{if(grade>=0&&grade<50)
{printf("fail");}
else if ((grade>=50,grade<60))
{printf("normal");}
else if ((grade>=60,grade<75))
{printf("good");}
else if ((grade>=75,grade<90))
{printf("very good");}
else
{printf("Excellent");}

}
else
{printf("Invalid number ");}

}
