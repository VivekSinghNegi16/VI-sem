#include <iostream>
using namespace std;

int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=0; i<n; i++)
	{
		k=i+1;
		for(j=0; j<n-i-1; j++)
		{
			cout<<" ";
		}
		for(j=0; j<2*i+1; j++)
		{
			if(j<=i)
				cout<<j+1;
			else
				cout<<--k;
		}
		cout<<endl;
	}
	for(i=0; i<n; i++)
	{
		k=n-i-1;
		for(j=0; j<i+1; j++)
		{
			cout<<" ";
		}
		for(j=0; j<2*(n-1-i)-1; j++)
		{
			if(j<n-i-1)
				cout<<j+1;
			else
				cout<<--k;
		}
		cout<<endl;
	}
}
