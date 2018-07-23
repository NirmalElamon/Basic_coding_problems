#include<iostream>
#include<cmath>
void merge(int *l,int *r,int *a,int nl,int nr){

int i=0;
int j=0;
int k=0;
while (i<nl && j<nr){
if (l[i]<=r[j]){
a[k]=l[i];
i=i+1;
}
else{a[k]=r[j];
j=j+1;}
k=k+1;
}
while (i<nl){
a[k]=l[i];
i=i+1;
k=k+1;
}
while(j<nr){
a[k]=r[j];
j=j+1;
k=k+1;
}
}

void mergesort(int *a,int n){
if (n<2)
	return;
else{
int l=round(n/2);
int r=n-l;
int left[l];
int right[r];
for (int i=0;i<l;i++){
left[i]=a[i];
}
for (int i=l;i<n;i++){
right[i]=a[i];
}
mergesort(left,l);
mergesort(right,r);
int nl=l;
int nr=r;
merge(left,right,a,nl,nr);
}
}

int main()
{ using namespace std;
int a[]={3,1,5,4,6,7,2,9};
int n=sizeof(a);
mergesort(a,n);
for (int i=0;i<8;i++){
cout<<a[i]<<" ";
}
}
