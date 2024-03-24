#include<stdio.h>
int main(void)
{ int number=0,x=0;
printf("please enter a number : \n");
scanf("%d",&number);
x=number-1;
if((number & (number-1)) ==0) //turn 8 and 7 to binary
{
printf("Number is power of 2");
}
else
{
printf("Number isn't power of 2");
}
}

