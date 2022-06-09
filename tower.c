#include<stdio.h>

void tower(int n, int temp, int src, int dest)
{

   if(n==1)
    printf("Move disc from source to dest\n");
   else
   {
    tower(n-1,src,dest,temp);
    printf("Move disc %d  from %d to %d\n",n,src,dest);
    tower(n-1,temp,src,dest);

   }

}
int main()
{
    int n;
    printf("Enter the number of discs\n");
    scanf("%d",&n);
    int src,temp,dest;
    tower(n,1,2,3);
    return 0;
}
