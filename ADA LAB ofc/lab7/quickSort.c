#include<stdio.h>
#include<time.h>
void delay(){
int i,n;
for(i=0;i<200000;i++)
    n=3000/13;
}
void quicksort(int number[25],int first,int last){
delay();
int i, j, pivot, temp;

if(first<last){

pivot=first;

i=first;

j=last;

while(i<j){

while(number[i]<=number[pivot]&&i<last)

i++;

while(number[j]>number[pivot])

j--;

if(i<j){

temp=number[i];

number[i]=number[j];

number[j]=temp;

}

}

temp=number[pivot];

number[pivot]=number[j];

number[j]=temp;

quicksort(number,first,j-1);

quicksort(number,j+1,last);

}

}

int main(){



 clock_t start,end;
    int n=5000;
	int arr[n];
	for(int i=0;i<5000;i++)
        arr[i]=n-i;


start=clock();
	quicksort(arr,0,n-1);
end=clock();
printf("Time=%f",(double)(end-start)/CLOCKS_PER_SEC);
	return 0;




return 0;

}
