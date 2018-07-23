#include<iostream>
using namespace std;

int partition(int *a,int start, int end){
int pivot=a[end];
int partitionindex=start;
for (int i=start;i<end;i++){
if (a[i]<pivot){
swap(a[i],a[partitionindex]);
partitionindex++;
}
}
swap(a[partitionindex],a[end]);
return partitionindex;
}
void quicksort(int *a,int start, int end){
if (start<end){
int partitionindex=partition(a,start,end);
quicksort(a,start,partitionindex-1);
quicksort(a,partitionindex+1,end);
}
}

int main()
{ 
int A[]={3,1,5,4,6,7,2,9};
quicksort(A,0,7);
for (int i=0;i<8;i++){
cout<<A[i]<<" ";
}
}
