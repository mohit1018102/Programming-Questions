#include<iostream>
#include<stdlib.h>
using namespace std;
void transpose(int n,int arr[][n])
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
           if(j>i)
           {
              temp=arr[i][j];
              arr[i][j]=arr[j][i];
              arr[j][i]=temp;
            }
         }
    }
}

int main()
{
   int n;
   cin>>n;
   
   int **arr=(int**)malloc(sizeof(int*)*n);
   for(int i=0;i<n;i++)
   {
       arr[i]=(int*)malloc(sizeof(int)*n);
   }
   

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
        cin>>arr[i][j];
  }

  transpose(n,arr);
  
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
        cout<<arr[i][j]<<" ";
      cout<<endl;
  }
   return 0;
}

  
