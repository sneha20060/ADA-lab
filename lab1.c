#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void selectionSort(int a[],int n)
{
int i,j;
for(i=0;i<n-1;++i)
{
int minIndex=i;
for(j=i+1;j<n;++j)
{
if(a[j]<a[minIndex])
{
minIndex=j;
}
}
if(minIndex!=i)
{
int temp=a[i];
a[i]=a[minIndex];
a[minIndex]=temp;
}
}
printf("sorted elemtents are:%d",a[i]); 
}
int main()
{
int i,n;
printf("Enter the number of elements:\n");
scanf("%d",&n);
int arr[n];
srand(time(NULL));
for(i=0;i<n;++i)
{
arr[i]=rand()%10000;
}
clock_t start=clock();
selectionSort(arr,n);
clock_t end=clock();
double time_taken=((double)(end-start))/CLOCKS_PER_SEC;
printf("Time taken for sorting :%f seconds\n",time_taken);
return 0;
}