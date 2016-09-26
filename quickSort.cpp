#include<iostream>
using namespace std;



void quickSort(int Arr[], int lower, int upper)
{
int x = Arr[(lower + upper) / 2];
int i = lower; int j = upper;
do{
while(Arr[i] < x) i ++;
while (Arr[j] > x) j --;
if (i <= j)
{
swap(Arr[i], Arr[j]);
i ++; j --; }
}while(i <= j);
if (j > lower)
quickSort(Arr, lower, j);
if (i < upper)
quickSort(Arr, i, upper);
	
}

int main()
{
	int size;int number;
	int arr[100];
	cout<<"enter size of array: "<<endl;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"enter elements "<<endl;
		cin>>number;
		arr[i]=number;
	}
	cout<<"original array is:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int lower=0;
	int upper=size;
	quickSort(arr,lower,upper);
	cout<<"sorted array: "<<endl;
	for(int i=1;i<=size;i++)
	{
		int x=arr[i];
		cout<<x<<" ";
	}
	return 0;
}


