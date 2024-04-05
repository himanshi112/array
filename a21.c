#include<stdio.h>
#include<string.h>
int main(void)
{
  int i;
  char a[5][50];
  for(i=0;i<5;i++)
  {
   scanf("%s",a[i]);
  }
  
  for(i=0;i<5;i++)
  {
    printf("%s\n",a[i]);
  }
  return 0;
 }
  
