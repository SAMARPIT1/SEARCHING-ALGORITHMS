//binary search
#include<iostream>
using namespace std;
int binarySearch(int arr[],int l,int r,int x)
{
	if(r>=l)
	{
		int mid=l+(r-1)/2;
		if(arr[mid]==x)
		return mid;
		if(arr[mid]>x)
		return binarySearch(arr,l,mid-1,x);
		if(arr[mid]<x)
		return binarySearch(arr,l,mid+1,x);
	}
}
int main()
{
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=4;
	int result=binarySearch(arr,0,n-1,x);
	cout<<result;
	return 0;
}
