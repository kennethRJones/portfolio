//Test Driver
#include <iostream>
#include <fstream>
#include <string> 
#include "frac.h"

int main()
{
	using namespace std;
	ifstream inFile;
	ofstream outFile;
	string inFileName;
	string outFileName;
	string outputLabel;
	string command;
	int numCommands;
	FractionType fraction;
	FractionType second;
	//prompt for file names, read file names, and prepare files
	cout<< "Enter Name of the input file;press return. " <<endl;
	cin >> inFileName;
	inFile.open(inFileName.c_str());

	cout<< "Enter name of the output file; press return. " <<endl;
	cin >> outFileName;
	outFile.open(outFileName.c_str());

	cout << "Enter name of test run; press return. " << endl;
	cin >> outputLabel;
	outFile << outputLabel <<endl;

	inFile >> command;
	numCommands = 0;
	
	while (command != "Quit" )
	{ 
		if (command == "Initialize")
		{
			int numerator, denominator;
			inFile>>numerator;
			inFile >> denominator;
			fraction.Initialize(numerator, denominator);
			outFile << "Numerator: " << fraction.GetNumerator()
				<< " Denominator: " << fraction.GetDenominator() <<endl;
			
		}
		else if(command == "GetNumerator")
			outFile << "Numerator: " << fraction.GetNumerator() << endl;
		else if (command == "GetDenominator")
			outFile << " Denominator: " << fraction.GetDenominator()<<endl;
		else if (command == "IsZero")
			if (fraction.IsZero())
				outFile << "Fraction is Zero " <<endl;
			else
				outFile << "Fraction is not Zero " <<endl;
		else if (command == "IsNotProper")
			if (fraction.IsNotProper())
				outFile << "Fraction is improper " <<endl;
			else
				outFile << "Fraction is proper " <<endl;
		else if(command == "Add")
		{
			
			second.Initialize(3,4);
			second.Add(second);
			outFile << "Fractions Add: " << second.GetNumerator() << "/" << second.GetDenominator() << endl;
		}
		else if(command == "Sub")
		{
			second.Initialize(3,4);
			second.Sub(second);
				outFile << "Fractions Sub: " << second.GetNumerator() << "/" << second.GetDenominator() << endl;
		}
			else if(command == "Mult")
			{
				second.Initialize(3,4);
				second.Mult(second);
					outFile << "Fractions Mult: " << second.GetNumerator() << "/" << second.GetDenominator() << endl;
			}
				else if (command == "Divid")
				{
					second.Initialize(3,4);
					second.Divid(second);
						outFile << "Fractions Divid: " << second.GetNumerator() << "/" << second.GetDenominator() << endl;
	}
		else
		{
			outFile << "Whole number is " << fraction.ConvertToProper()
				<<endl;
			outFile << "Numerator: " << fraction.GetNumerator()
				<< " Denominator: " << fraction.GetDenominator() <<endl;
			
		}
		numCommands++;
		cout << "Command number " << numCommands << " completed. " <<endl;
		inFile>>command;
	};
		cout << " Testing Complete. " <<endl;
		return 0;
	}