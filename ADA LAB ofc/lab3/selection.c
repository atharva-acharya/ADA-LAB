#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        swap(&arr[min_idx], &arr[i]);
    }
}

void delay()
{
    unsigned long int j,temp;
    for(j=0;j<5000000;j++)
    temp=39/550;
}

int main()
{   clock_t start,end;
    int arr[7000];
    int n;{
     n=1000;
     while(n<=5000)
      {
        for(int i=0;i<n;i++)
        {
            arr[i]=i;
        }

        double start=clock();
        {

                delay();
                selectionSort(arr, n);

        }
        double end=clock();
        printf("Time for n=%d is %2f secs\n",n,((end-start)/CLOCKS_PER_SEC));
        n=n+1000;
     }
   }
    return 0;
}
