#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int sumstk(stack<int> s)
{  int sum=0;

   while(!s.empty())
   {  
       sum+=s.top();
       s.pop();
   }

   return sum;
}

int main()
{
    stack<int> s1;
    stack<int> s2;
    stack<int> s3;
    int n;
    cin>>n;
    int i;
    for(i=0;i<n;i++)
    {
       int x;
       cin>>x;
       s1.push(x);
     
     }

   cin>>n;
   for(i=0;i<n;i++)
   {
       int x;
       cin>>x;
       s2.push(x); 
    }

   cin>>n;
   for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s3.push(x);
        
    }
   
   int sum1=sumstk(s1);
   int sum2=sumstk(s2);
   int sum3=sumstk(s3);
   cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
   int count=0;
   while(!(sum1==sum2&&sum2==sum3))
   {
         if(sum1>sum2 && sum1>sum3)
         {      sum1=sum1-s1.top();
                s1.pop();
         }
          else
           if(sum2>sum1 && sum2>sum3)
           {      sum2=sum2-s2.top();
                  s2.pop();
           }
          else
            {      sum3=sum3-s3.top();
                   s3.pop();
            }
           count++;
    }
    cout<<count<<endl;

   return 0;
}

        


















  
