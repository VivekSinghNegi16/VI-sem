#include<iostream>
using namespace std;

void insertionSort(int arr[],int n)
{
	int i,j,temp;
	for (i = 0; i < n; i++)
	{
		temp = arr[i];
		j=i-1;
		while(j >= 0 && arr[j] > temp)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
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
	insertionSort(arr,n);
	display(arr,n);
	return 0;
}