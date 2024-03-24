#include<stdio.h>
int main(void)
{int fact=1,i=1,Number=0;
printf("Please Enter your number: \n");
scanf("%d",&Number);
do
{
fact=fact*i;
i++;
}
while(i<=Number);
printf("Factorial: %d \n",fact);
} 

