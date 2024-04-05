//MEAN, MODE AND MEDIAN
#include<stdio.h>
int main()
{
  int n,i,k,j,me,mo;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int s=0;
  for(i=0;i<n;i++)
  {
    s+=a[i];
  }
  printf("mean is %d\n",s/n);
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[j]<a[i])
      {
        k=a[i];
        a[i]=a[j];
        a[j]=k;
      }
    }
  }
  if(n%2==0)
  {
    me=(a[(n-1)/2]+a[n/2])/2;
        
  }
  else
  {
    me=a[n/2];
  }
  printf("Median is %d\n",me);
  int max=0,c=0,mode;
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]==a[j])
      {
        c++;
      }
    }
    if(c>max)
    {
      max=c;
      mode=a[i];
    }
  }
  printf("Mode is %d\n",mode);
  return 0;
}

//MEAN MODE AND MEDIAN IN FUNCTION

#include<stdio.h>
int Mean(int a[], int s) {
  int i, sum = 0;
  for(i = 0; i < s; i++) {
    sum += a[i];
  }
  return sum / s;
}
int Median(int a[], int s) {
  int i, k, me;
  for(i = 0; i < s - 1; i++) {
    for(int j = i + 1; j < s; j++) {
      if(a[j] < a[i]) {
        k = a[i];
        a[i] = a[j];
        a[j] = k;
      }
    }
  }
  if(s % 2 == 0) {
    me = (a[(s - 1) / 2] + a[s / 2]) / 2;
  } else {
    me = a[s / 2];
  }
  return me;
}
int Mode(int a[], int s) {
  int i, j, max = 0, c = 0, mode;
  for(i = 0; i < s - 1; i++) {
    c = 0;
    for(j = i + 1; j < s; j++) {
      if(a[i] == a[j]) {
        c++;
      }
    }
    if(c > max) {
      max = c;
      mode = a[i];
    }
  }
  return mode;
}
int main() {
  int n, i;
  scanf("%d", &n);

  int a[n];
  for(i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  printf("Mean is %d\n",Mean(a, n));
  printf("Median is %d\n",Median(a, n));
  printf("Mode is %d\n",Mode(a, n));
  return 0;
}

//MEAN MODE AND MEDIAN IN POINTER

#include<stdio.h>
int Mean(int *a, int s) {
  int i, sum = 0;
  for(i = 0; i < s; i++) {
    sum += *(a + i);
  }
  return sum / s;
}
int Median(int *a, int s) {
  int i, j, k, me;
  for(i = 0; i < s - 1; i++) {
    for(j = i + 1; j < s; j++) {
      if(*(a + j) < *(a + i)) {
        k = *(a + i);
        *(a + i) = *(a + j);
        *(a + j) = k;
      }
    }
  }
  if(s % 2 == 0) {
    me = (*(a + (s - 1) / 2) + *(a + s / 2)) / 2;
  } else {
    me = *(a + s/ 2);
  }
  return me;
}
int Mode(int *a, int s) {
  int i, j, max = 0, c = 0, mode;
  for(i = 0; i < s - 1; i++) {
    c = 0;
    for(j = i + 1; j < s; j++) {
      if(*(a + i) == *(a + j)) {
        c++;
      }
    }
    if(c > max) {
      max = c;
      mode = *(a + i);
    }
  }
  return mode;
}
int main() {
  int n, i;
  scanf("%d", &n);
  int a[n];
  for(i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  printf("Mean is %d\n", Mean(a, n));
  printf("Median is %d\n", Median(a, n));
  printf("Mode is %d\n", Mode(a, n));
  retern 0;
}


