//MERGE

#include<stdio.h>
int main()
{
  int m,n,j,r;
  scanf("%d %d",&m,&n);
  int a[m],b[n],c[m+n];
  int i,k=0;
  printf("Enter first array ");
  for(i=0;i<m;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter Second array ");
  for(j=0;j<n;j++)
  {
    scanf("%d",&b[j]);
  }
  for(i=0;i<m;i++)
  {
    c[k]=a[i];
    k++;
  }
  for(j=0;j<n;j++)
  {
    c[k]=b[j];
    k++;
  }
  for(j=0;j<k-1;j++)
  {
   for(i=j+1;i<k;i++)
   {
     if(c[j]>c[i])
     {
       r=c[i];
       c[i]=c[j];
       c[j]=r;
     }
   }
  }
  for(i=0;i<k;i++)
  {
    printf("%d ",c[i]);
  }
  return 0;
}

//MERGE IN FUNCTION

#include<stdio.h>
void merge(int m, int n) {
  int a[m], b[n], c[m + n];
  int i, j, k = 0, r;
  printf("Enter first array: ");
  for (i = 0; i < m; i++) {
    scanf("%d", &a[i]);
  }
  printf("Enter second array: ");
  for (j = 0; j < n; j++) {
    scanf("%d", &b[j]);
  }
  for (i = 0; i < m; i++) {
    c[k] = a[i];
    k++;
  }
  for (j = 0; j < n; j++) {
    c[k] = b[j];
    k++;
  }
  for (j = 0; j < k - 1; j++) {
    for (i = j + 1; i < k; i++) {
      if (c[j] > c[i]) {
        r = c[i];
        c[i] = c[j];
        c[j] = r;
      }
    }
  }
  printf("Merged and sorted array: ");
  for (i = 0; i < k; i++) {
    printf("%d ", c[i]);
  }
}
int main() {
  int m, n;
  scanf("%d %d", &m, &n);
  merge(m, n);
  return 0;
}

// MERGE IN POINTER

#include<stdio.h>
void merge(int m, int n, int *a, int *b, int *c) {
  int i, j, k = 0, r;
  printf("Enter first array: ");
  for (i = 0; i < m; i++) {
    scanf("%d", a + i);
  }
  printf("Enter second array: ");
  for (j = 0; j < n; j++) {
    scanf("%d", b + j);
  }
  for (i = 0; i < m; i++) {
    *(c + k) = *(a + i);
    k++;
  }
  for (j = 0; j < n; j++) {
    *(c + k) = *(b + j);
    k++;
  }
  for (j = 0; j < k - 1; j++) {
    for (i = j + 1; i < k; i++) {
      if (*(c + j) > *(c + i)) {
        r = *(c + i);
        *(c + i) = *(c + j);
        *(c + j) = r;
      }
    }
  }
  printf("Merged and sorted array: ");
  for (i = 0; i < k; i++) {
    printf("%d ", *(c + i));
  }
}
int main() {
  int m, n;
  scanf("%d %d", &m, &n);
  int a[m], b[n], c[m + n];
  merge(m, n, a, b, c);
  return 0;
}

       
    
