//SQUARE MATRIX
#include<stdio.h>
int main()
{
  int n,i,j,k;
  scanf("%d",&n);
  int a[n][n];
  i=0;
  j=n/2;
  k=1;
  while(k<=n*n)
  {
    a[i][j]=k;
    i--;
    j++;
    if(k%n==0)
    {
      i=i+2;
      j=j-1;
    }
    if(j==n)
    {
      j=j-n;
    }
    if(i<0)
    {
      i=i+n;
    }
    k++;
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  return 0;
 }

//SQUARE MATRIX IN FUNCTION
#include<stdio.h>
void squarematrix(int n, int a[n][n]) {
  int i = 0, j = n / 2, k = 1;
  while (k <= n * n) {
    a[i][j] = k;
    i--;
    j++;
    if (k % n == 0) {
      i = i + 2;
      j = j - 1;
    }
    if (j == n) {
      j = j - n;
    }
    if (i < 0) {
      i = i + n;
    }
    k++;
  }
}

int main() {
  int n, i, j;
  scanf("%d", &n);
  int a[n][n];
  squarematrix(n, a);
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
 return 0;
}

#SQUARE MATRIX IN POINTER AND FUNCTION
#include<stdio.h>
void spiralmatrix(int n, int (*a)[n]) {
  int i = 0, j = n / 2, k = 1;
  while (k <= n * n) {
    *(*(a + i) + j) = k;
    i--;
    j++;
    if (k % n == 0) {
      i = i + 2;
      j = j - 1;
    }
    if (j == n) {
      j = j - n;
    }
    if (i < 0) {
      i = i + n;
    }
    k++;
  }
}
int main() {
  int n, i, j;
  scanf("%d", &n);
  int a[n][n];
  spiralmatrix(n, a);
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", *(*(a + i) + j));
    }
    printf("\n");
  }
 return 0;
}

