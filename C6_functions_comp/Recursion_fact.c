#include<stdio.h>
int fact(int number);
int main(void)
{
int number=0,result=0;
printf("Please enter a number : \n");
scanf("%d",&number);
result=fact(number);
printf("Result= %d \n",result);
}

int fact(int number)
{
 if((number==1) ||(number==0))
     return 1;
else 
{
	return number * fact(number-1);
}
}

