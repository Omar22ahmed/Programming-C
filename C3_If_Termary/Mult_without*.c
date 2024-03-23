#include<stdio.h>

//multiplying number by 9 without using * operation
int main(void)
{
int number=0;
int res=0;
printf("Please enter a number: \n");
scanf("%d",&number);
res=(number<<3)+number; //shifting to the left 3times=*8

printf("res=\t %d \n",res);
 }

