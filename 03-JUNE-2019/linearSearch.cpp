#include<iostream>
using namespace std;
int search(int[],int,int);

int main()
{
	int n;
	cin>>n;
	int a[n];
	int i;
	
	for(i=0;i<n;i++) cin>>a[i];
	
	int key;
	cin>>key;
	
	int index=search(a,n,key);
	cout<<index;
	
}

int search(int a[],int n,int key)
{
	int i;
	 for(i=0;i<n;i++)
	 {
	 	if(key==a[i]) return i;
	 }
	 return -1;
}
