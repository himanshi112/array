#include<stdio.h>
int main()
{
  int i,n;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int po=0,ne=0;
  for(i=0;i<n;i++)
  {
     if(a[i]>0)
     {
       if(a[i]==0)
       {
         po--;
       }
       po++;
     }
     else
     {
       if(a[i]==0)
       {
         ne--;
       }
       ne++;
     }
  }
  printf("Positive Numbers are %d\nNegative numbers are %d",po,ne);
  return 0;
}
   
