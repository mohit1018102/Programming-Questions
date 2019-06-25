#include<iostream>
#include<stdlib.h>
using namespace std;
void display(int r,int c,int **arr);
int main()
{
    int t;
    cin>>t;

     int* arr[t];
     while(t--)
     {
        int n;
        cin>>n;
        arr[t]=(int*)malloc(sizeof(int)*n);
        for(int j=0;j<n;j++)
            cin>>arr[t][j];

         display(t,n,arr);
     }
    return 0;
}

void display(int r,int c,int **arr)
{
    for(int j=0;j<c;j++)
    {
        cout<<arr[r][j]<<" ";
    }
    cout<<endl;
}
