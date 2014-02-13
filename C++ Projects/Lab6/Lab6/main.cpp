#include <iostream>
#include <fstream>
int pasTri(int,int);
void sep(int,int);

using namespace std;

//ofstream outFile;

void main() 
{

	//outFile.open("Pascal.txt");

	int pas,i,j;
	cout << "\nEnter the number for pascal: ";
	cin>> pas;
	for(i=1;i<=pas;i++)
	{
		sep(pas-i,3);
		for(j=1;j<=i;j++)
		{
			cout << pasTri(i,j);
			sep(1,3);
		}
		cout << "\n";
	}
}
int pasTri(int row,int column)
{
	if(column==0)
		return 0;
	else if
	(row==1&&column==1)
		return 1;
	else if(column>row)
		return 0;
	else
		return (pasTri(row-1,column-1)+pasTri(row-1,column));
}
void sep(int pas,int m)
{
	int i;
	pas*=m;
	for(i=0;i<pas;i++)
		cout<<" ";
}