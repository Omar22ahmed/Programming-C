#include <stdio.h>
int main(void)
{
int number=0,clearbit=0,res=0;
printf("Please Enter a number to set:\n ");
scanf("%d",&number);
printf("Enter bit to be set: /n ");
scanf("%d",&clearbit);
res=number & ~(1<<clearbit);
printf("Result: %d \n",res);
}
