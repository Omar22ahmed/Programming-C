#include <stdio.h>
int main(void)
{
int number=0,Toggletbit=0,res=0;
printf("Please Enter a number :\n ");
scanf("%d",&number);
printf("Enter bit to be s: /n ");
scanf("%d",&Toggletbit);
res=number ^ (1<<Toggletbit);
printf("Result: %d \n",res);
}
