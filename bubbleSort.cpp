#include<iostream>
using namespace std;


void bubbleSort(int Arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		
		if(Arr[i]>Arr[i+1])
			swap(Arr[i],Arr[i+1]);
	
	}
}
void printArr(int Arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<Arr[i]<<" ";
	}
}

int main()
{
	int Arr[100];
	int number;int size;

	cout<<"enter size of array: "<<endl;
	cin>>size;
	cout<<"enter numbers : "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>number;
		Arr[i]=number;
	}
	cout<<"Unsorted array: "<<endl;
	printArr(Arr,size);
	bubbleSort(Arr,size);
	cout<<"Sorted array: "<<endl;
	printArr(Arr,size);

		
	return 0;

}