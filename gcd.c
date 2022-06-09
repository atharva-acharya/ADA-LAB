#include<stdio.h>
int gcd(int m, int n)
{
   while(n!=0)
   {
       int r;
       r=m%n;
       m=n;
       n=r;
   }
   return m;
}
int main()
{
    int m,n,r;
    printf("Enter the value of m and n\n");
    scanf("%d %d",&m,&n);
    printf("The value of gcd of %d and %d is %d \n",m,n,gcd(m,n));
    return 0;
}
