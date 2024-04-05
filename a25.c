#include<stdio.h>
int main()
{
  int i;
  int a[100],k=1;
  for(i=0;i<100;i++)
  {
    a[i]=k;
    k++;
  }
  for(i=99;i>=0;i--)
  {
    printf("%d ",a[i]);
  }
  return 0;
}
  
