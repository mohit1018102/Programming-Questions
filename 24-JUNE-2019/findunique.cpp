#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    int i,j;
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       { cin>>arr[i][j];
       }
    }

    map<int,int> count;
   for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       { count[arr[i][j]]+=1;
       }
    }
    

   map<int,int>::iterator it;
   for(it=count.begin();it!=count.end();it++)
   {    if((*it).second==1)
         cout<<(*it).first<<" ";
   }
   return 0;
}

