#include<stdio.h>
int main()
{
  int n,i;
  scanf("%d",&n);
  int a[n],e=2;
  for(i=0;i<n;i++)
  {
    a[i]=e;
    e+=2;
  }
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  return 0;
}
  

