#include<iostream>
using namespace std;

void rev(int[],int,int);

int main()
{

    int n;
    cin>>n;
    
    int a[n];
    
    int i;
    for(i=0;i<n;i++) cin>>a[i];
    int k;
    cin>>k;
    
    rev(a,0,k-1);
    rev(a,k,n-1);
    rev(a,0,n-1);
    
    for(i=0;i<n;i++) cout<<a[i];
    return 0;
}


void rev(int a[],int s,int e)
{
    int temp;
    while(s<e)
    {
       temp=a[s];
       a[s]=a[e];
       a[e]=temp;
       s++;
       e--;
     }
}
     
