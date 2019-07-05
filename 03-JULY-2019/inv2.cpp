#include<iostream>
using namespace std;
int merge(int arr[],int temp[],int left,int mid,int right)
{   int inv=0;
	int i=left;
	int j=mid+1;
	int k=left;
	while(i<=mid && j<=right)
	{
		if(arr[i]<=arr[j])
		{
			temp[k++]=arr[i++];
		}
		else
		{
			inv=inv+(mid-i+1);
			temp[k++]=arr[j++];
		}
	}
	while(i<=mid) temp[k++]=arr[i++];
	while(j<=right) temp[k++]=arr[j++];
	
	for(i=left;i<=right;i++) arr[i]=temp[i];
	return inv;
}
int mergesort(int arr[],int temp[],int left,int right)
{   int inv=0;
	if(left<right)
	{   int mid=(left+right)/2;
		inv=mergesort(arr,temp,left,mid);
		inv+=mergesort(arr,temp,mid+1,right);
		inv+=merge(arr,temp,left,mid,right);
	}
	return inv;
}
int main()
{
	int n;
	cin>>n;
	int arr[n]={0};
	for(int i=0;i<n;i++) cin>>arr[i];
	int temp[n]={0};
	cout<<mergesort(arr,temp,0,n-1);
	cout<<endl;
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
