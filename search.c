
#include<stdio.h>
#include<conio.h>
#include<time.h>
void delay(){
    unsigned long int i,temp;
  for(i=0;i<500000;i++){temp=33/550;}

}
int main(){

    int a[7000];
    int j,i,c,key,n,o=-1;

   printf("enter the choice: 1.linear search 2.binary search");
   scanf("%d",&c);

   if(c==1){
      n=1000;
      while(n<=5000)
      {
      for(i=0;i<n;i++){
      a[i]=i;
    }
      key=a[n-1];
      double start=clock();
     {
       for(i=0;i<n;i++){
          delay();
           if(a[i]==key)
           o=0;
       }
       if(o==0)
           printf("\nsearch element is found");
           else
           printf("\nsearch failed:");
     }
   double end=clock();
   printf("\ntime for n=%d is %2f secs",n,((end-start)/CLOCKS_PER_SEC));
   n=n+1000;
}
}

else
if(c==2)
{  n=1000;
while(n<=5000)
      {
      for(i=0;i<n;i++){
      a[i]=i;
    }
      key=a[n-1];
      double start=clock();

     { int b,m,e;
       b=0,e=n-1;
       while(b<=e){
  m=(b+e)/2;
delay();

  if(a[m]==key){
      o=0;
      break;
  }
  else
  if(a[m]<key)
  b=m+1;
  else if(a[m]>key)
  e=m-1;
}
           if(o==0)
           printf("\nsearch element is found");
           else
           printf("\nsearch failed");

 }
   double end=clock();
   printf("\ntime for n=%d is %2f secs",n,((end-start)/CLOCKS_PER_SEC));
   n=n+1000;

}

}

}
