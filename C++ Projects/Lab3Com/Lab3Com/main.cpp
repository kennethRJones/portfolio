#include <iostream>
#include <cstdlib>
using namespace std;


void floyd2(int);
void path(int, int);
void display(int);


int w[10][10];
int d[10][10];
int p[10][10];

void main()
{
int i,j,input;

cout<<"Enter the number of vertices higher then 5: "<<endl;
cin>>input;

cout<<"Enter weights for the vertices with a space: "<<endl;
for(i=0;i<input;i++)
  {
   for(j=0;j<input;j++)
    cin>>w[i][j];
   }

 floyd2(input);
 display(input);
 for(i=1;i<=input;i++)
	 for(j=1;j<=input;j++)
	 {
		 cout<< "v"<<i;
		path(i, j);
		 cout<< "v"<<j<<endl;

	 }


 

system("pause");

 }



 
void floyd2(int input)
 {
 int k,i,j;



for(i=0;i<input;i++)
{
	for(j=0;j<input;j++){
	 p[i][j]=0;
  d[i][j]=w[i][j];
	}
	
 }
 

	for(k=0;k<input;k++)
      {
       for(i=0;i<input;i++)
    {
      for(j=0;j<input;j++)
	   if(d[i][k] + d[k][j] < d[i][j])
	   {
		   p[i][j] = k;
		   d[i][j] = d[i][k] + d[k][j];
		  cout<<"P = " <<p[i][j]<<endl;
      }
	   
	  
    }
}
	for(i=0;i<input;i++)
	{
		cout<< endl;
		for(j=0;j<input;j++)
			cout<<p[i][j]<< " ";
	}
}

void path(int q,int r)
	{
		if (p[q][r] != 0)
		{
			path(q,p[q][r]);
			cout << "v" << p[q][r];
			path(p[q][r],r);
		}
	}



 void display(int input)
 {

	 //cout<<"Shortest Path:"<<endl;
   for(int i=0;i<input;i++)
   {
    cout<<"\n";
     for(int j=0 ; j<input;j++)
     cout<<"\t"<<d[i][j];
    }
   cout<<endl<<endl;


 }