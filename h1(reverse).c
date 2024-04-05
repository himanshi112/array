//REVERSE BEFORE PRINT

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
  int r=n-1,k;
  for(i=0;i<n/2;i++)
  {
    k=a[i];
    a[i]=a[r-i];
    a[r-i]=k;
  }    
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
} 

//REVERSE BEFORE PRINT IN FUNCTION

#include<stdio.h>
void rev(int a[], int s) {
  int i, k;
  int r = s - 1;
  for(i = 0; i < s / 2; i++) {
    k = a[i];
    a[i] = a[r - i];
    a[r - i] = k;
  }
}
int main() {
  int n, i;
  scanf("%d", &n);
  int a[n];
  for(i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  rev(a, n);
  for(i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}

//REVERSE BEFORE PRINT IN PPOINTER

#include<stdio.h>
void rev(int *a, int s) {
  int i, k;
  int r = s - 1;
  for(i = 0; i < s / 2; i++) {
    k = *(a + i);
    *(a + i) = *(a + r - i);
    *(a + r - i) = k;
  }
}
int main() {
  int n, i;
  scanf("%d", &n);
  int a[n];
  for(i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  rev(a, n);
  for(i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}

