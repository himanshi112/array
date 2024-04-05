#include<stdio.h>
int main()
{
  int n,i,e=0,o=0;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  { 
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(i%2==0)
    {
      o=o+a[i];
    }
    else
    {
      e=e+a[i];
    }
  }
  printf("Even position sum is %d\nOdd Position sum is %d",e,o);
  return 0;
}
  
