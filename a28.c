


#include<stdio.h>
int main()
{
  int n,i;
  scanf("%d",&n);
  int t1[n],t2[n],t3[n];
  printf("Enter test first: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&t1[i]);
  }
  printf("Enter test second: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&t2[i]);
  }
  printf("Enter test third: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&t3[i]);
  }
  int max;
  for(i=0;i<n;i++)
  {
    if(t1[i]>t2[i])
    {
      max=t2[i];
    }
    else
    {
      max=t1[i];
    }
    t3[i]=t3[i]+max;
  }
  for(i=0;i<n;i++)
  {
    if(t3[i]>=80)
      printf("Grade A\n");
    else if(t3[i]>=70)
      printf("Grade B\n");
    else if(t3[i]>=60)
      printf("Grade C\n");
    else if(t3[i]>=50)
      printf("Grade D\n");
    else
      printf("Grade F\n");
   }
   return 0;
}

