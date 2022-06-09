#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linearSearch(int array[], int size, int key)
{   
    for (int i = 0; i < size; i++)  
    {  delay();
        if (array[i] == key)  
        return i+1;  
    }  
  return -1;  
}


int binarySearch(int arrb[], int b, int key, int e)
{
    int mid;
    delay();
    if (b > e)
    {
        printf("Key not found\n");
    }
    mid = (b + e) / 2;
    if (arrb[mid] == key)
    {   
        printf("Key found\n");
    }
    else if (arrb[mid] > key)
    {   
        binarySearch(arrb, b, mid - 1, key);
    }
    else if (arrb[mid] < key)
    {
        binarySearch(arrb, mid + 1, e, key);
    }
}

void delay()
{
    unsigned long int j,temp;
    for(j=0;j<50000;j++)
    temp=39/550;
}


void main()
{
    int ch,n;
    int key;
    int arr[7000];
    clock_t start,end;
    printf("Enter your choice\n 1.Linear search\n 2. Binary search\n");
    scanf("%d",&ch);
    if(ch==1)
    {
     n=1000;
     while(n<=5000)
      {
        for(int i=0;i<n;i++)
        {
            arr[i]=i;
        }
        key=arr[n-1];
        double start=clock();
        {

                
                linearSearch(arr,n,key);

        }
        double end=clock();
        printf("Time for n=%d is %2f secs\n",n,((end-start)/CLOCKS_PER_SEC));
        n=n+1000;
     }
   }
else if(ch==2)
{
    n=1000;
    while(n<=5000)
    {
        for(int i=0;i<n;i++)
        {
            arr[i]=i;
        }
        key=arr[n-1];
        double start=clock();
        {
                binarySearch(arr,0,key,n-1);
        }
        double end=clock();
        printf("Time for n=%d is %2f secs\n",n,((end-start)/CLOCKS_PER_SEC));
        n+=1000;
    }
}
}

