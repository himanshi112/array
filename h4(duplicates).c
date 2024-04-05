//DUPLICATES

#include<stdio.h>
int main()
{
  int n,i,j,k;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
   
  for(i=0;i<n-1;i++)
  {
     int c=0,max=0;
     for(j=i+1;j<n;j++)
     {
       if(a[j]!=-1)
       {
         if(a[i]==a[j])
         {
           a[j]=-1;
           c++;
         }
       }
     }
     if(c>max)
     {
       printf("%d ",a[i]);
     }
   }     
 return 0;
}

//DUPLICATES IN FUNCTION

#include<stdio.h>
void dup(int n, int a[]) {
  for (int i = 0; i < n - 1; i++) {
    int c = 0, max = 0;
    for (int j = i + 1; j < n; j++) {
      if (a[j] != -1) {
        if (a[i] == a[j]) {
          a[j] = -1;
          c++;
        }
      }
    }
    if (c > max) {
      printf("%d ", a[i]);
    }
  }
}
int main() {
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  dup(n, a);
  return 0;
}

//DUPLICATES IN POINTER

#include<stdio.h>
void dup(int n, int *a) {
  for (int i = 0; i < n - 1; i++) {
    int c = 0, max = 0;
    for (int j = i + 1; j < n; j++) {
      if (*(a + j) != -1) {
        if (*(a + i) == *(a + j)) {
          *(a + j) = -1;
          c++;
        }
      }
    }
    if (c > max) {
      printf("%d ", *(a + i));
    }
  }
}
int main() {
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  dup(n, a);
  return 0;
}


