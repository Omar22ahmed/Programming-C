#include<stdio.h>
int main(void)
{
int number=0;
printf("Please enter a number: \n");
scanf("%d",&number);
while(number>1)
{
if((number%3)==0)
{ if (number==3)
{
printf("Number is power of 3: \n"); 
break;//to print it only one time 
}
else
{
number/=3;
}
}
else
{
printf("Number isnot power of 3: \n");
break;
}
}
}
