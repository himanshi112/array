#include<stdio.h>
int main()
{
  int n,i=0,p;
  scanf("%d",&n);
  int a[n];
  for(p=1;p<=n;p++)
  {
    int j,c=0;
    for(j=1;j<=p;j++)
    {
      if(p%j==0)
      {
        c++;
      }
    }
    if(c==2)
    {
      a[i]=p;
      i++;
    }
  }
  int k=i;
  for(i=0;i<k;i++)
  {
    printf("%d ",a[i]);
  }
  return 0;
}
  
