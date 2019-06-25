#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<pair<int,int> > task;
    int n;
    cin>>n;
   
    int i,j;
    for(i=0;i<n;i++)
    { int s,f;
      cin>>s>>f;
      task.push_back(make_pair(s,f));
    }

   sort(task.begin(),task.end());
   
    vector<int> machine;
   for(i=0;i<n;i++)
   {
        if(i==0) machine.push_back(task[i].second);
         else
           {     int nx=machine.size();
                 for(j=0;j<nx;j++)
                 {
                       if(task[i].first>=machine[j])
                       {
                          machine[j]=task[i].second; break;
                       }
                 }
                 if(j==nx) machine.push_back(task[i].second);
            }
     } 

     cout<<machine.size();
    return 0;
}

 
