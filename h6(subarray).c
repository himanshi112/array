//SUBARRAY

#include<stdio.h>
int main()
{
  int s,n,sum=0,j;
  scanf("%d %d",&n,&s);
  int a[n];
  printf("Enter array ");
  for(j=0;j<n;j++)
  {
    scanf("%d",&a[j]);
  }
  int i=0;
  for(j=0;j<n;j++)
  {
    sum=sum+a[j];
    if(sum>s)
    { 
      sum=sum-a[i];
      i++;
    }
    if(sum==s)
    {
      printf("%d %d",i,j);
      break;
    }
  }
  return 0;
}

//SUBARRAY IN FUNCTION

#include <stdio.h>
void subarray(int n, int s) {
  int a[n];
  int sum = 0, i = 0, j;
  printf("Enter array: ");
  for (j = 0; j < n; j++) {
    scanf("%d", &a[j]);
  }
  for (j = 0; j < n; j++) {
    sum += a[j];
    while (sum > s) {
      sum -= a[i];
      i++;
    }
    if (sum == s) {
      printf("%d %d", i, j);
      break;
    }
  }
}
int main() {
  int n, s;
  scanf("%d %d", &n, &s);
  subarray(n, s);
  return 0;
}

//subarray in pointer

#include <stdio.h>
void subarray(int n, int s, int *a) {
  int sum = 0, i = 0, j;
  printf("Enter array: ");
  for (j = 0; j < n; j++) {
    scanf("%d", a + j);
  }
  for (j = 0; j < n; j++) {
    sum += *(a + j);
    while (sum > s) {
      sum -= *(a + i);
      i++;
    }
    if (sum == s) {
      printf("%d %d", i, j);
      break;
    }
  }
}
int main() {
  int n, s;
  scanf("%d %d", &n, &s);
  int a[n];
  subarray(n, s, a);
  return 0;
}


