#include<stdio.h>
int main(void)
{int i,num=0,sum=0;
for(i=1;i<=10;i++)
{
printf("Please Enter a number %d",i);
scanf("%d",&num);
sum=sum+num;
}
printf("Sum = %d",sum);
}
