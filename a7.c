#include<stdio.h>
int main()
{
  int n,i,t;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++)
  {
    t=a[i+1]-a[i];
    if(t==1)
    {
      printf("Yes");
      break;
    }
    else
    {
      printf("No");
      break;
    }
   }
   return 0;
}
