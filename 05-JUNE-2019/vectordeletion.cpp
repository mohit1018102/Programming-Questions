#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{

   vector<int> v;
   
   int key;
   
   while(true)
   {
     cin>>key;
     if(key==-1) break;
     v.push_back(key);
   }
   
   int i;
   
   for(i=0;i<v.size();i++)
   {
      cout<<v[i]<<" ";
   }
   
   cout<<endl;
   
   v.pop_back();
   for(i=0;i<v.size();i++)
   {
      cout<<v[i]<<" ";
   }
   cout<<endl;
   v.erase(v.begin()+0);
   for(i=0;i<v.size();i++)
   {
      cout<<v[i]<<" ";
   }
   
   cout<<endl;
   cout<<"---------------------------\n";
   
   v.erase(v.begin()+1,v.begin()+3);
   for(i=0;i<v.size();i++)
   {
      cout<<v[i]<<" ";
   }
   
   
   return 0;
}
   
 
