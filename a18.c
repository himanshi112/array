#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  int i=0,j=1;
  while(j<=n)
  {
    int fact=1,k=1;
    while(k<=j)
    {
      fact*=k;
      k++;
    }
    a[i]=fact;
    i++;
    j++;
  }
  int p=i;
  for(i=0;i<p;i++)
  {
    printf("%d ",a[i]);
  }
  return 0;
 }
