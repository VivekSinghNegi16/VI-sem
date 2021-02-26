#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partation(int arr[],int l,int h)
{
	int pivot = arr[h];
	int i = l-1,j;
	for(j = l; j < h; j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[h]);
	return i+1;
}

void quickSort(int arr[],int l,int h)
{
	int pivot;
	if(l < h)
	{
		pivot=partation(arr,l,h);
		quickSort(arr,l,pivot-1);
		quickSort(arr,pivot+1,h);
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
	quickSort(arr,0,n-1);
	display(arr,n);
	return 0;
}