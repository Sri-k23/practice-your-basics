#include<stdio.h>

int fact(int m);
int main()
{
  int n;
  scanf("%d",&n);
  
  printf("%d\n",fact(n));
  
  return 0;
}
//function for factorial of a number
int fact(int m)
{
  int product,main=1;
  if(m==1|m==0)
  {
    main=1;
  }
  else
  {
    while((m-1)!=0)
    {
      product=m;
      main=main*product;
    }
  }
 return main;
}
