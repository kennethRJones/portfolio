#include <iostream>
#include <fstream>



using namespace std;


void quicksort(int low, int high);
void partition(int low, int high, int& pivotpoint);
int S[9];
int length = 0;




int main()
{
int inc=0;
int dec =11;
ofstream outFile;

outFile.open("output.txt");

for(int i=0;i<=9;i++)
S[i]=rand()%10;
length=0;
quicksort(0,9);

outFile<<"Random Sorted: ";
for(int i=0;i<=9;i++)
outFile<<S[i]<<endl;

outFile<<"Number of Comparisions: "<<length<<endl;

for(int i=0;i<=9;i++)
S[i]=rand()%9;
length=0;
quicksort(0,9);

outFile<<"Duplicate Sorted: ";
for(int i=0;i<=9;i++)
outFile<<S[i]<<endl;

outFile<<"Number of Comparisions: "<<length<<endl;


for(int j=0;j<=9;j++)
{
inc++;
S[j]=inc;
}
length=0;
quicksort(0,9);

outFile<<"Increasing Sorted: "; 
for(int i=0;i<=9;i++)
outFile<<S[i]<<endl;

outFile<<"Number of Comparisions: "<<length<<endl;


for(int k=0;k<=9;k++)
{
dec--;
S[k]=dec;
outFile<<"Decreasing Unsorted: "<<S[k]<<endl;
}
length=0;
quicksort(0,9);

outFile<<"Decreasing Sorted: "; 
for(int i=0;i<=9;i++)
outFile<<S[i]<<endl;

outFile<<"Number of Comparisions: "<<length<<endl;

cout<<"Sorted in output file"<<endl;



}
void quicksort (int low, int high)
{	
	int pivotpoint=0;
	
	

	if (high > low) 
	{
		partition (low, high, pivotpoint);
		quicksort(low,pivotpoint-1);
		quicksort(pivotpoint + 1, high);
	}


}

void partition ( int low, int high, int& pivotpoint)
{	
		int i , j,temp;
		int pivotitem;

		
		

		pivotitem = S[low];          // choose first item for  
                                                                  // pivotitem.
		j = low;

		for ( i= low + 1; i <= high; i++){
			length++;
		     if ( S[ i ] < pivotitem) 
			 {                     //basic operation
			j++;
			temp=S[i];
			S[i]=S[j];
			S[j]=temp;
		    }
		}
		pivotpoint = j;
		 temp=S[low];
		 S[low]=S[pivotpoint];
		 S[pivotpoint]=temp;   //Put pivotitem at pivotpoint
		
}