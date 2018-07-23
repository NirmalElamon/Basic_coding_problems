#include<iostream>

void insertionsort(int a[],int n){
for (int i=1;i<n;i++){
	int value=a[i];
	int hole=i;
	while(hole>0 && a[hole-1]>value){
		a[hole]=a[hole-1];
		hole=hole-1;
}
	a[hole]=value;
}
}



int main()
{ using namespace std;
  int a[]={1,2,5,3,8,6,5};
  insertionsort(a,7);
  for (int i =0;i<7;i++)
{cout<<a[i]<<" ";
}

}
