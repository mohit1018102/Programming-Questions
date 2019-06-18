#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tno,amt,bal;
    string action;

  vector<pair<int,pair<int,pair<string,int> > > >  txn;
   double A;
   cin>>A;

   int R;
   cin>>R;
    
    int t=R-2;
    while(t--)
    {
        cin>>tno>>amt>>action>>bal;
        txn.push_back(make_pair(tno,make_pair(amt,make_pair(action,bal))));
    }
    double I;
    cin>>I;
    
    int i;
    for( i=0;i<txn.size()-1;i++)
    {
        if(txn[i].first+1!=txn[i+1].first) break;
    }
    

   

   int ind=i;
   int p=0;
    for( i=0;i<txn.size();i++)
    {
        p+=txn[i].second.second.second;
    }

    int x,y;
    if(txn[ind+1].second.second.first=="credit")
    { y=txn[ind+1].second.second.second-txn[ind+1].second.first;
    }
    else
     {
        y=txn[ind+1].second.second.second+txn[ind+1].second.first;
     }


    x=round(I*36500/A)-p-y;
    
    if(x>txn[ind].second.second.second)
   {
       cout<<txn[ind].first+1<<" "<<x-txn[ind].second.second.second<<" "<<"credit"<<" "<<x;
   }
   else
    {
       cout<<txn[ind].first+1<<" "<<txn[ind].second.second.second-x<<" "<<"debit"<<" "<<x;
    }
   cout<<endl;

   if(y>x)
   {
      cout<<txn[ind].first+2<<" "<<y-x<<" "<<"credit"<<" "<<y;
   }
   else
   {
      cout<<txn[ind].first+2<<" "<<x-y<<" "<<"debit"<<" "<<y;
   }
  
   return 0;
}
     
    
      
   
   
    


   

