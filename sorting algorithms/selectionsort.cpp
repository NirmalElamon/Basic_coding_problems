#include<iostream>
void selectionsort(int a[],int n)
{for (int i=0;i<n-1;i++){
 int imin=i;
 for (int j=i+1;j<n;j++){
   if (a[j]<a[imin])
	imin=j;
}
  int tmp=a[i];
  a[i]=a[imin];
  a[imin]=tmp;
}
}




int main()

{ 
using namespace std;
int a[]={2,1,3,5,4,10,7,6};
  selectionsort(a,6);
    
  for (int i=0;i<6;i++){
  cout<<a[i]<<" ";
}


}
