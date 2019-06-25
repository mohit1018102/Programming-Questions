#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b)
{
     if(a.first>=b.first) return true;
     else
       return false;
}
int main()
{
    vector<pair<int,int> > knap;
    int n;
    cin>>n;
    int i,j;
    for(i=0;i<n;i++)
    {
      int p,q;
      cin>>p>>q;
      knap.push_back(make_pair(p,q));
    }
    sort(knap.begin(),knap.end(),comp);
     
    float revenue=0;
    int bag;
    cin>>bag;
      for(i=0;i<n;i++)
       {  

          if(knap[i].second<=bag)
           {
                         revenue+=knap[i].second*knap[i].first;
                          bag=bag-knap[i].second;
            }
             else
             { revenue+=bag*knap[i].first;
               bag=0;
               break;
             }
              
       }
       cout<<revenue<<" "<<endl;
     return 0;
}
                  
