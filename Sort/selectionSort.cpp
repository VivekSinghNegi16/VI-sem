#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int arr[],int n)
{
	int i,j,index;
	for (i = 0; i < n-1; i++)
	{
		index=i;
		for(j = i+1; j < n; j++)
		{
			if(arr[j]<arr[index])
				index=j;
		}
		swap(&arr[i],&arr[index]);
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
	selectionSort(arr,n);
	display(arr,n);
	return 0;
}