#include<stdio.h>
int main()
{
  int n,i,j;
  scanf("%d",&n);
  int a[n][n],b[n][n],s[n][n],d[n][n];
  printf("Enter first matrix: ");
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
     scanf("%d",&a[i][j]);
   }
   printf("\n");
  }
  printf("Enter second matrix");
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
     scanf("%d",&b[i][j]);
   }
   printf("\n");
  }
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
     s[i][j]=a[i][j]+b[i][j];
     d[i][j]=a[i][j]-b[i][j];
   }
   printf("\n");
  }
  printf("Sum of Matrix is\n");
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
     printf("%d ",s[i][j]);
   }
   printf("\n");
  }
  printf("\nDifference of Matrix is\n");
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
     printf("%d ",d[i][j]);
   }
   printf("\n");
  }
  return 0;
 }
  
