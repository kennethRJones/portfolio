#include <iostream>
#include <time.h>
using namespace std;

int nQ;  
int *col; 

void queens(int i);
bool promising(int i);

int main()
{
 cout<<"Number of queens: \n";
  cin>>nQ;
 
  col=(int*)malloc((nQ+1)*sizeof(int));

  cout<<"There are "<<nQ<< " queens in a "<<nQ<<" x "<<nQ<<" chessboard\n\n answer(s): \n\n";
  
  queens(0);
	free(col);
return 0;
}

void queens(int i)
{
 int j;    
 int print; 
 if(promising(i))  
 {
   if( i == nQ )  
   {
	
     for( print = 1; print <= nQ; print++ )
     {
       cout<<"Put " << print << " queen to row "<< col[print]<<"\n";
	   
     }
	 cout<<"Time to Solve: " << clock()/CLOCKS_PER_SEC <<"."<< clock()%CLOCKS_PER_SEC<<endl;
     cout<<"\n\n";
   }
   else
   {
     for(j = 1; j <= nQ; j++ ) 
     {
      col[i + 1] = j;
       queens(i + 1);
     }
   }

 }
}


bool promising( int i )
{
  int k = 1; 
  bool switch1 = true; 

  while( (k < i) && switch1 )
  {
  
    if( (col[i] == col[k])||(abs( col[i] - col[k]) == i - k))
    {
        switch1 = false;  
    }
    k++;  

  }
  return switch1;
}