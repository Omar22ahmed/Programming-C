#include<stdio.h>
int main(void)
{
int number=0,bit=0,res=0,shift=0;
printf("Please enter a number: \n");
scanf("%d",&number);
printf("Please enter a bit to be checked: \n");
scanf("%d",&bit);

shift=number>>bit;
res=shift&1;
if (res==1)
{printf("true");}

else
{printf("false");}

}
