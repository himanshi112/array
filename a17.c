#include<stdio.h>
#include<math.h>
long long int Power(int base,int exponent){
long long int res;
	if (exponent==0){return 1;}
	else{
	 for (int i =1;i<=exponent;i++)
         res=res*base;
	}
	return res;
}
int main()
{
      int i,j,k,n,a;
      scanf("%d",&n);
      int b[n];
      i=0;
      for(a=1;a<=n;a++)
      {
           int t=a;
           int t1=a;
           int c=0;
           while(t>0){
               c++;
               t=t/10;
           }
           int r,sum=0;
           while(t1>0){
               r=t1%10;
               sum=sum+Power(r,c);
               t1=t1/10;
           }
           if(a==sum)
           {
               b[i]=a;
               i++;
           }
      }
      printf("Armstrong Numbers are ");
      for(k=0;k<i;k++)
      {
          printf("%d ",b[k]);
      }
      return 0;
}
