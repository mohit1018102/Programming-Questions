#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(pair<int,int> a,pair<int,int> b)
{
     if(a.second<b.second) return true;
     else 
      return false;
}
int main()
{

   vector<pair<int,int> > vp;
   int key;
   int n;
   cin>>n;
   int i;
   
   for(i=0;i<n;i++)
   {
     cin>>key;
     vp.push_back(make_pair(key,i));
   }
   
   cout<<"--------------sorting(using 1 value)-----------------\n";
   
   sort(vp.begin(),vp.end());
   
   
   for(i=0;i<n;i++) cout<<vp[i].first<<" "<<vp[i].second<<endl;
   
   cout<<"--------------sorting(using 2 value)-----------------\n";
   
   sort(vp.begin(),vp.end(),comp);
   
   
   for(i=0;i<n;i++) cout<<vp[i].first<<" "<<vp[i].second<<endl;
   
   
   return 0;
}
   
   
   
   
   
      
