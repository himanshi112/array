#include<stdio.h>
int main()
{
  int n,i,cday,hday;
  scanf("%d",&n);
  int a[n],b[n];
  printf("Enter first array:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter Second array:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&b[i]);
  }
  int s=0;
  float mam;
  for(i=0;i<n;i++)
  {
    s+=a[i];
  }
  mam=s/n;
  printf("maximum mean is %f\n",mam);
  int max=a[0];
  for(i=0;i<n-1;i++)
  {
    int j=i+1;
    if(a[j]>max)
    {
      max=a[j];
      hday=j+1;
    }
  }
  int s1=0;
  float mim;
  for(i=0;i<n;i++)
  {
    s+=b[i];
  }
  mim=s1/n;
  printf("minimum mean is %f\n",mam);
  int min=a[0];
  for(i=0;i<n-1;i++)
  {
    int j=i+1;
    if(a[j]<min)
    {
      min=a[j];
      cday=j+1;
    }
  }
  printf("Hot day is %d\ncold day is %d",hday,cday);
  return 0;
 }
  
