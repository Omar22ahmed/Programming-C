#include<stdio.h>
int SetBit(int num , int BitNum);
int ClrBit(int num , int BitNum);
int TogBit(int num , int BitNum);
int GetBit(int num , int BitNum);


int main(void)
{
int num=0,BitNum=0;
printf("Please Enter a number : ");
scanf("%d",&num);
printf("Please Enter a Bit number : ");
scanf("%d",&BitNum);
printf("The number aftter setting the input Bit is : %d \n" , SetBit (num,BitNum));
printf("The number aftter Clearing the input Bit is : %d \n" , ClrBit (num,BitNum));
printf("The number aftter Toggling the input Bit is : %d \n" , TogBit (num,BitNum));
printf("The number aftter Getting the input Bit is : %d \n" , GetBit (num,BitNum));


}

int SetBit(int num , int BitNum)
{
	return(num | (1<<BitNum));

}
int ClrBit(int num , int BitNum)
{
	return(num & (~(1<<BitNum)));
}
int TogBit(int num , int BitNum)
{
	return(num ^ (1<<BitNum));
}

int GetBit(int num , int BitNum)
{
	return((num>>BitNum)&1);
}
