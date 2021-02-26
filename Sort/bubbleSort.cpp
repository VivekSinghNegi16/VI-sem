#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;}

void bubbleSort(int arr[],int n)
{
	int i,j;
	for (i = 0; i < n; i++)
	{
		for(j = 0; j < n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
		}
	}
}

void display(int arr[],int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int n,i;
	cin>>n;
	int arr[n];
	for (i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	bubbleSort(arr,n);
	display(arr,n);
	return 0;
}