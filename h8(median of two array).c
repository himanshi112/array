// MEDIAN OF TWO ARRAY
#include<stdio.h>
int main()
{
  int n,i,j,m;
  scanf("%d %d",&m,&n);
  int a[m],b[n];
  printf("Enter first array ");
  for(i=0;i<m;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter Second array");
  for(j=0;j<n;j++)
  {
    scanf("%d",&b[j]);
  }
  int me1,m1;
  if(m%2==0)
  {
    m1=a[(m-1)/2]+a[m/2];
    me1=m1/2;
  }
  else
  {
    me1=a[n/2];
  }
  printf("Median of first array %d\n",me1);  
  int me2,m2;
  if(n%2==0)
  {
    m2=a[(n-1)/2]+a[n/2];
    me2=m2/2;
  }
  else
  {
    me2=a[n/2];
  }
  printf("Median of second array %d",me2);  
  return 0;
 }

//MEDIAN OF TWO ARRAY IN FUNCTION

#include <stdio.h>
void input(int s, int a[]) {
    for (int i = 0; i < s; i++) {
        scanf("%d", &a[i]);
    }
}
int Med(int a[], int s) {
    int median;
    if (size % 2 == 0) {
        int m1 = a[(s - 1) / 2];
        int m2 = a[s / 2];
        median = (m1 + m2) / 2;
    } else {
        median = a[s / 2];
    }
    return median;
}
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m], b[n];
    printf("Enter first array: ");
    input(m, a);
    printf("Enter second array: ");
    input(n, b);
    int m1 = Med(a, m);
    printf("Median of the first array: %d\n", m1);
    int m2 = Med(b, n);
    printf("Median of the second array: %d\n", m2);
    return 0;
}


#include <stdio.h>
void input(int s, int *a) {
    for (int i = 0; i < s; i++) {
        scanf("%d", a + i);
    }
}
int Med(int *a, int s) {
    int median;
    if (s % 2 == 0) {
        int m1 = *(a + (s - 1) / 2);
        int m2 = *(a + s / 2);
        median = (m1 + m2) / 2;
    } else {
        median = *(a + s / 2);
    }
    return median;
}
int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int a[m], b[n];

    printf("Enter first array: ");
    input(m, a);

    printf("Enter second array: ");
    input(n, b);

    int m1 = Med(a, m);
    printf("Median of the first array: %d\n", m1);

    int m2 = Med(b, n);
    printf("Median of the second array: %d\n", m2);

    return 0;
}

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
    
    
