#include <string>
#include <fstream>
using namespace std;
//Declare a class to represent the Date ADT
//This file DateType.h

enum RelationType {LESS, EQUAL, GREATER};
//Compares self with someDate
class DateType
{
public:
	void Initialize(int newMonth,int newDay, int newYear);
	int GetMonth() const;
	int GetYear() const;
	int GetDay() const;
	string GetMonthAsString()const;
	DateType Adjust (int daysAway)const;
	RelationType ComparedTo(DateType someDate) const;
private:
	int year;
	int month;
	int day;
	string monthString;
};