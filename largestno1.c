#include<stdio.h>
int main()
{
  int n1,n2,n3;
  printf("enter the number\n");
  scanf("%d %d %d",&n1,&n2,&n3);
  if(n1>=n2&&n1>n3)
  {
    printf("largest number %d",n1);
  }
  if(n2>=n1&&n2>n3)
  {
     printf("largest number %d",n2);
  }
  if(n3>=n1&&n3>n2)
  {
     printf("largest number %d",n3);
  }
}
