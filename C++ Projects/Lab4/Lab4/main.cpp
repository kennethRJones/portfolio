//main.cpp
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstring>
#include "unsorted.h"

using namespace std;
void PrintList(UnsortedType list);

int main()
{
  string outputLabel;     
  string command;        // operation to be executed
  
  int number;
  int item;
  UnsortedType list;
  bool found;
  int numCommands;
  ofstream outFile;
  //ifstream inFile;

/*inFile.open("input.txt");
while(inFile >> item){
	  list.InsertItem(item);
	  outFile<<"List: "<<item;
	  outFile<<" ";
}
inFile.close();*/



	
	cout<<"Input command"<<endl;
  cin >> command;

  outFile.open("output.dat");

  numCommands = 0;
  while (command != "Quit")
  { 
    if (command == "InsertItem")
    {
      cin >> number; 
      item=number;
      list.InsertItem(item);
      outFile<<item;
      outFile << " is inserted" << endl;
    }
    else if (command == "DeleteItem")
    {
      cin >> number;
      item=number;
      list.DeleteItem(item);
      outFile<<item;
      outFile<< " is deleted" << endl;
    }
    else if (command == "RetrieveItem")
    {
      cin >> number;
      item=number;
      list.RetrieveItem(item, found);
      if (found)
        outFile << number << " found in list." << endl;
      else 
		  outFile << number  << " not in list."  << endl;  
    } 
	 else if (command == "DeleteItemAll")
    {
      cin >> number;
      item=number;
      list.DeleteItemAll(item);
	  outFile<<"All ";
      outFile<<item<<"'s";
      outFile<< " are deleted" << endl;
    }
    else if (command == "LengthIs")  
      outFile << "Length is " << list.GetLength() << endl;
    else if (command == "IsFull")
      if (list.IsFull())
        outFile << "List is full." << endl;
      else 
		  outFile << "List is not full."  << endl;  
    else PrintList(list);
	
    numCommands++;
    cout <<  "\n Command number " << numCommands << " completed." 
         << endl;
    cin >> command;
  };
 
  cout << "Testing completed."  << endl;
  return 0;
}


void PrintList(UnsortedType list)
// Pre:  list has been initialized.      
//       dataFile is open for writing.   
// Post: Each component in list has been written to dataFile.
//       dataFile is still open.         
{
  int length;
  int item;

  list.ResetList();
  length = list.GetLength();
  for (int counter = 1; counter <= length; counter++)
  {
    list.GetNextItem(item);
    cout<<item;
	cout<<" ";
  }
}
