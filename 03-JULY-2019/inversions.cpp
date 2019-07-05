#include<iostream>
#include<cmath>
using namespace std;
int mergesort(int arr[],int temp[],int l,int r);
int merge(int arr[],int temp[],int l,int mid,int r);
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    int temp[n];
	cout<<mergesort(arr,temp,0,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}

int mergesort(int arr[],int temp[],int l,int r)
{   int inv=0;
   
	if(l<r)
	{
		int mid=(l+r)/2;
	
		inv=mergesort(arr,temp,l,mid);
		inv+=mergesort(arr,temp,mid+1,r);
		inv+=merge(arr,temp,l,mid,r);
	}
	return inv;
}

int merge(int arr[],int temp[],int l,int mid,int r)
{
	int inv=0;
	int i=l; int j=mid+1,k=l;
	while(i<=mid && j<r)
	{
		if(arr[i]<=arr[j])
		{
			temp[k++]=arr[i++];
		}
		else
		{
			inv+=mid-i;
			temp[k++]=arr[j++];
			
		}
	}
	while(i<mid)
	{
		temp[k++]=arr[i++];
	}
	while(j<r)
	{
		temp[k++]=arr[j++];
	}
	for(i=l;i<r;i++) arr[i]=temp[i];
	
	return inv;
	
}

