#include<stdio.h>
int main()
{
int count=0,n;
printf("enter the integer\n");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("the digit is %d",count);
}
