#include<stdio.h>
int main()
{
 int n;
 int i,t,c;
 scanf("%d",&n);
 scanf("%d",&t);
 int a[n];
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  c=0;
  if(a[i]==t)
  {
    printf("Yes");
    c++;
    break;
  }
 }
 if(c==0)
 {
   printf("N0");
 }
 return 0;
}

