#include<iostream>
using namespace std;

int cx[27][27];

int ncr()
{ 
	int i,j;
	for(i=0;i<27;i++)
	{
		for(j=0;j<27;j++)
		{
			 if(i<j) cx[i][j]=0;
			 else
			  if(i==j||j==0) cx[i][j]=1;
			  else
			   cx[i][j]=cx[i-1][j]+cx[i-1][j-1];
		}
    }
	
}

int main()
{ 
  int x,y,z;
  int s,m,c;
  cin>>x>>s>>y>>m>>z>>c;
  char a,b,ni;
  cin>>a>>b>>ni;
 
  ncr();
  int total=cx[x][s]*cx[y][m]*cx[z][c];
  cout<<total<<endl;
  
  int x1,y1,z1;
  int s1,m1,c1;
  x1=x;y1=y;z1=z;
  s1=s;m1=m;c1=c;
  
  if((a-64)<=x)
   { x1--; s1--;}
    else
     if((a-64)<=x+y)
     { y1--; m1--;}
     else
       { z1--; c1--;
	   }
	   
	   if((b-64)<=x)
       { x1--; 
	   }
       else
        if((b-64)<=x+y)
         { y1--;}
        else
         { z1--; 
	     }
    
	int A=cx[x1][s1]*cx[y1][m1]*cx[z1][c1];

  //--------------------------------------------
  x1=x;y1=y;z1=z;
  s1=s;m1=m;c1=c;
  if((b-64)<=x)
  { x1--; s1--;}
   else
     if((b-64)<=x+y)
     { y1--; m1--;}
     else
       { z1--; c1--;
	   }
	   
	   if((a-64)<=x)
       { x1--; 
	   }
       else
        if((a-64)<=x+y)
         { y1--;}
        else
         { z1--; 
	     }
    
	int B=cx[x1][s1]*cx[y1][m1]*cx[z1][c1];
	
  //-----------------------------------------------
  x1=x;y1=y;z1=z;
  s1=s;m1=m;c1=c;
  
  if((a-64)<=x)
   { x1--; s1--;}
    else
     if((a-64)<=x+y)
     { y1--; m1--;}
     else
       { z1--; c1--;
	   }
	   
	   if((b-64)<=x)
       { x1--; 
	   }
       else
        if((b-64)<=x+y)
         { y1--;}
        else
         { z1--; 
	     }
	     
	     if((ni-64)<=x)
         { x1--; s1--;}
         else
         if((ni-64)<=x+y)
         { y1--; m1--;}
         else
         { z1--; c1--;
	     }
    
	int C=cx[x1][s1]*cx[y1][m1]*cx[z1][c1];
	
	//-------------------------------------
	x1=x;y1=y;z1=z;
    s1=s;m1=m;c1=c;
  
  if((b-64)<=x)
   { x1--; s1--;}
    else
     if((b-64)<=x+y)
     { y1--; m1--;}
     else
       { z1--; c1--;
	   }
	   
	   if((a-64)<=x)
       { x1--; 
	   }
       else
        if((a-64)<=x+y)
         { y1--;}
        else
         { z1--; 
	     }
	     
	     if((ni-64)<=x)
         { x1--; s1--;}
         else
         if((ni-64)<=x+y)
         { y1--; m1--;}
         else
         { z1--; c1--;
	     }
    
	int D=cx[x1][s1]*cx[y1][m1]*cx[z1][c1];

	cout<<(A+B-C-D+1)<<endl;
  return 0;
}
