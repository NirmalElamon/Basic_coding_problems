#include<iostream>
void bubblesort(int a[],int n)
{	for (int i=1;i<n;i++)
{ for (int j=0;j<n-1;j++)
{ if (a[j]>a[j+1])
{
	int tmp=a[j];
	a[j]=a[j+1];
	a[j+1]=tmp;
}
}
}
}


int main()
{ using namespace std;
	int a[]={1,2,5,3,8,6,5};
	bubblesort(a,7);
	
  for (int i=0;i<7;i++)
{
  cout<<a[i]<<" ";
}
}

