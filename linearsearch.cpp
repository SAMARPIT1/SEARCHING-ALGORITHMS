//searching algorithms.......linear search
#include<iostream>
using namespace std;
int search(int arr[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		return i;
	}
}
int main()
{
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=3;
	int result=search(arr,n,x);
	cout<<"the result is"<<result;
	return 0;
}
