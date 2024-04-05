#include<stdio.h>
int main()
{
  int n,i;
  scanf("%d",&n);
  int a[n],f=1,k=0;
  for(i=0;i<=n;i++)
  {
    if(n%f==0)
    {
      a[k]=f;
      k++;
    }
    f++;
  }
  int p=k;
  for(k=0;k<p;k++)
  {
    printf("%d ",a[k]);
  }
  return 0;
}
  

