#include<iostream>
#include<stdlib.h>
using namespace std;
void rotateleft(int n,int** arr)
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

    for(i=0;i<n/2;i++)
   {
      for(j=0;j<n;j++)
      {
        temp=arr[i][j];
        arr[i][j]=arr[n-i-1][j];
        arr[n-i-1][j]=temp;
      }
   }
            
}
int main()
{
   int n;
   cin>>n;
    
    int **arr=(int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
     arr[i]=(int*)malloc(sizeof(int*)*n);

  for(int i=0;i<n;i++)
   {
        for(int j=0;j<n;j++)
       {
           cin>>arr[i][j];
       }
   }
  
  rotateleft(n,arr);
   cout<<"\n-------------leftrotate--------------------\n";
  for(int i=0;i<n;i++)
   {
        for(int j=0;j<n;j++)
       {
           cout<<arr[i][j]<<" ";
       }
      cout<<endl;
   }

  return 0;
}
  

