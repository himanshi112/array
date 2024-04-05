#include<stdio.h>
int main()
{
  int n,i;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int sum=0;
  float mean;
  for(i=0;i<n;i++)
  {
    sum=a[i]+sum;
  }
  mean=sum/n;
  printf("Mean is %f\n",mean);
  int max,min;
  for(i=0;i<n-1;i++)
  {
    int j;
    for(j=i+1;j<n;j++) 
    {
      if(a[j]>max)
      {
        max=a[i];
      }
      if(a[j]<min)
      {
        min=a[j];
      }
    }
  }
  printf("maxinum Waight %d\nminimum Weight %d",max,min);
  return 0;
}
