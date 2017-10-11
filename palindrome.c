#include<stdio.h>
int main()
{
int n,r=0,o,d;
printf("enter the number");
scanf("%d",&n);
o=n;
while(n!=0)
{
   d=n%10;
   r=r*10+d;
   n=n/10;
}
if(o==r)

    printf("palindrome");

else

    printf("not a palindrome");

}
