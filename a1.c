#include<stdio.h>
int main(void)
{
  int n,i;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
    a[i]=i+1;
  }
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
 }
  
