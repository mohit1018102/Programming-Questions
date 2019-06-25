#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   vector<int> rope;
   int n;
   cin>>n;
   
   int i;
  
   for(i=0;i<n;i++)
   {
      int x;
      cin>>x;
      rope.push_back(x);
    }
   int cost=0;
   while(rope.size()!=1)
   {
       sort(rope.begin(),rope.end());
       int x=rope[0]+rope[1];
       cost+=x;
       rope.erase(rope.begin(),rope.begin()+2);
       rope.push_back(x);
   }

   cout<<cost;
   return 0;
}
        
