//ROTATE ARRAY

#include<stdio.h>
int main()
{
  int n,k;
  scanf("%d %d",&n,&k);
  int a[n];
  int i=0,c=1;
  printf("Enter array ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int j=1;
  while(j<=n)
  {
    if(a[i]!=-1)
    { 
      if(c==k)
      {
        printf("%d ",a[i]);
        j++;
        c=1;
        a[i]=-1;
      }
      else
      {
        c++;
      }
    }
    i++;
    i=i%n;
  }
  return 0;
 }

//ROTATE ARRAY IN FUNCTION

#include<stdio.h>
void ratate(int n, int k) {
  int a[n];
  int i = 0, c = 1, j = 1;
  printf("Enter array: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  i = 0; 
  while (j <= n) {
    if (a[i] != -1) {
      if (c == k) {
        printf("%d ", a[i]);
        j++;
        c = 1;
        a[i] = -1;
      } else {
        c++;
      }
    }
    i++;
    i = i % n; 
  }
}
int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  rotate(n, k);
  return 0;
}

//ROTATE ARRAY IN POINTER

#include<stdio.h>
void rotate(int n, int k, int *a) {
  int i = 0, c = 1, j = 1;
  printf("Enter array: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  i = 0; 
  while (j <= n) {
    if (a[i] != -1) {
      if (c == k) {
        printf("%d ", a[i]);
        j++;
        c = 1;
        a[i] = -1;
      } else {
        c++;
      }
    }
    i++;
    i = i % n; 
  }
}
int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  int a[n];
  rotate(n, k, a);
  return 0;
}



