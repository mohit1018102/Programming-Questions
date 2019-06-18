#include<iostream>
#include<cstdio>
using namespace std;
int snum[12];
bool find(int number[],int n1,int n2)
{    int i,ki,kj;
     bool flag=false,flag2=false;
     for(i=0;i<12;i++)
     {
        if(number[i]==n2 && !flag)
        {  ki=i;
           number[i]=-number[i];
           flag=true;
        }
       
         if(number[i]==n1  && !flag2)
         { kj=i;
           number[i]=-number[i];
           flag2=true;
         }
      }

      if(flag==true && flag2==true) 
     {  number[ki]=-9999;
        number[kj]=-9999;
        return true;
      }
      else
        return false;
}

void reset(int number[])
{
   int i=0;
   for(i=0;i<12;i++)
   { if(number[i]==-snum[i]) number[i]=-number[i];
    }
}
       

int calc(int number[],int max)
{
  int i=max;
  while(i>0)
  {
     int n1=i%10,n2=(i/10)%10;
    
     if(find(number,n1,n2)) 
     {  
        return i;
     }
     reset(number);
     i--;
   }
   return 0;
}

int calc2(int number[],int max)
{
  int i=max;
  
  while(i>=0)
  {
     int n1=i%10,n2=(i/10)%10;
    
     if(find(number,n1,n2)) 
     {  
        return i;
     }
     reset(number);
     i--;
   }
   return -1;
}

     

int main()
{
   int months[]={31,28,31,30,31,30,31,31,30,31,30,31};
   int number[12];

    for(int i=0;i<11;i++)
    {
     scanf("%d,",&number[i]);
     
    }

   scanf("%d",&number[11]);
   
   for(int i=0;i<12;i++) snum[i]=number[i];
   int month,date,hour,min;
   month=0;date=0; hour=-1; min=-1;

   month=calc(number,12);
 
   
   if(month!=0)
   {
        date=calc(number,months[month-1]);
   }

   if(date!=0)
   {
        hour=calc2(number,23);
   }
   
   if(hour!=-1)
   {  min=calc2(number,59);
      
   }
    if(min!=-1)
   {
   	  if(month<10) cout<<"0"<<month;
   	  else
   	     cout<<month;
   	  cout<<"/";
   	  
   	  if(date<10) cout<<"0"<<date;
   	  else
   	     cout<<date;
   	  cout<<" ";
   	  
	  if(hour<10) cout<<"0"<<hour;
   	  else
   	     cout<<hour;
   	  cout<<":";
   	  
   	  if(min<10) cout<<"0"<<min;
   	  else
   	     cout<<min;
   }
   else
    cout<<"0";

   return 0;
}

