#include<stdio.h>
int main()
{
  int n,i,j;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int c=0,b;
  scanf("%d",&b);
  for(i=0;i<n-1;i++)
  {
    if(a[i]==b)
    c++;
  }
  printf("%d",c);
  return 0;
}  

