#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int partition(int a[],int low,int high){
int pivot=a[low];
int i=low+1;
int j=high;
int temp;
while(1){
while(i<=high&&a[i]<=pivot)
i++;
while(a[j]>pivot)
j--;
if(i<j){
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
else{
temp=a[low];
a[low]=a[j];
a[j]=temp;
return j;
}}}
void quicksort(int a[],int low,int high){
if(low<high){
int pi=partition(a,low,high);
quicksort(a,low,pi-1);
quicksort(a,pi+1,high);
}}
int main(){
int n,i;
printf("Enter the number of elements:");
scanf("%d",&n);
int a[n];
srand(time(NULL));
for(i=0;i<n;++i)
a[i]=rand()%100000;
clock_t start=clock();
quicksort(a,0,n-1);
clock_t end=clock();
printf("Sorted elements");
for(i=0;i<10;i++)
printf("%d ",a[i]);
double time_taken=((double)(end-start))/CLOCKS_PER_SEC;
printf("The time taken is %f seconds",time_taken);
return 0;
}