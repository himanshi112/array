//BINARY SEARCH
#include<stdio.h>
int main()
{
  int n,i,sea;
  scanf("%d %d",&n,&sea);
  int a[n];
  printf("Enter array ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int s=0,e=n-1,m=(s+e)/2;
  if(a[m]!=sea)
  {
    if(a[m]<sea)
    {
      s=m+1;
      m=(s+e)/2;
    }
    else
    {
      e=m-1;
      m=(s+e)/2;
    }
   }
   printf("Location of of searching number is %d",m);
   return 0;
 }  
//BINARY SEARCH IN FUNCTION
#include<stdio.h>
int binarySearch(int a[], int n, int sea) {
    int s = 0, e = n - 1, m = (s + e) / 2;
    while (s <= e) {
        if (a[m] == sea) {
            return m; 
        } else if (a[m] < sea) {
            s = m + 1;
        } else {
            e = m - 1;
        }
        m = (s + e) / 2;
    }
    return -1; 
}
int main() {
    int n, i, sea;
    scanf("%d %d", &n, &sea);
    int a[n];
    printf("Enter array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int result = binarySearch(a, n, sea);
    if (result != -1) {
        printf("Location of the searching number is %d\n", result);
    } else {
        printf("Number not found in the array.\n");
    }
    return 0;
}
//BINARTY SEARCH IN POINTER
#include<stdio.h>
int binarySearch(int *a, int n, int sea) {
    int s = 0, e = n - 1, m = (s + e) / 2;
    while (s <= e) {
        if (*(a + m) == sea) {
            return m; 
        } else if (*(a + m) < sea) {
            s = m + 1;
        } else {
            e = m - 1;
        }
        m = (s + e) / 2;
    }
    return -1; 
}
int main() {
    int n, i, sea;
    scanf("%d %d", &n, &sea);
    int a[n];
    printf("Enter array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", a + i);
    }
    int result = binarySearch(a, n, sea);
    if (result != -1) {
        printf("Location of the searching number is %d\n", result);
    } else {
        printf("Number not found in the array.\n");
    }
    return 0;
}

