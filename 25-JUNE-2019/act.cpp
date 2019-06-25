#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b)
{
     if(a.second<=b.second) return true;
     else
        return false;
}
int main()
{
    vector<pair<int,int> > act;
    int n;
    cin>>n;
   
    int i,j;
    for(i=0;i<n;i++)
    { int s,f;
      cin>>s>>f;
      act.push_back(make_pair(s,f));
    }

   sort(act.begin(),act.end(),comp);
   int timer=0;
   int count=0;
  for(i=0;i<n;i++)
  {
       if(i==0)
       {  timer=act[i].second;
          count++;
       }
       else
            if(act[i].first>=timer)
             {
                 timer=act[i].second;
                  count++;
             }
   }
   cout<<count<<endl;

   return 0;
}
   
