// File DateType.cpp contains the implementation of class DateType
#include "DateType.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

//Nmber of days in each month
static int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30,
31, 30, 31};

//Names of the months
static string conversionTable[] = {"Error", "January", "February",
"March", "April", "May", "June", "July", "August", "September",
"October", "November", "December"};

void DateType::Initialize(int newMonth,int newDay, int newYear)
{
	if(newMonth < 1 || newMonth > 12)
		throw string ("Month is Invalid");
	if (newDay < 1 || newDay > daysInMonth[newMonth])
		throw string("Day is Invalid");
	else if (newYear < 1583)
	throw string ("Year is Invalid");
	year = newYear;
	month = newMonth;
	day = newDay;
	switch(month)
	{
		case 1: monthString="January";
				break;
		case 2:monthString="February";
				break;
		case 3:monthString="March";
			break;
		case 4:monthString="April";
			break;
		case 5:monthString="May";
			break;
		case 6:monthString="June";
			break;
		case 7:monthString="July";
				break;
		case 8:monthString="August";
				break;
		case 9:monthString="September";
			break;
		case 10:monthString="October";
			break;
		case 11:monthString="November";
			break;
		case 12:monthString="December";
			break;
	}

}
int DateType::GetMonth() const
{
	return month;
}
string DateType::GetMonthAsString()const
{
	return monthString;
}

int DateType::GetYear() const
{
	return year;
}
int DateType::GetDay() const
{
	return day;
}
RelationType DateType::ComparedTo(DateType aDate) const
{
	if (year < aDate.year)
		return LESS;
	else if (year > aDate.year)
		return GREATER;
	else if (month < aDate.month)
		return LESS;
	else if (month > aDate.month)
		return GREATER;
	else if (day < aDate.day)
		return LESS;
	else if (day > aDate.day)
		return GREATER;
	else return EQUAL;
}

DateType DateType::Adjust(int daysAway) const
{
	int newDay = day + daysAway;
	int newMonth = month;
	int newYear = year;
	string monthString = conversionTable[month];
	bool finished = false;
	int daysInThisMonth;
	DateType returnDate;
	while (!finished)
	{
		daysInThisMonth = daysInMonth[newMonth];
		if (newMonth == 2)
			//test for leap year
			if(((newYear % 4 == 0) && !(newYear % 100 == 0))
				|| (newYear % 400 == 0))
				daysInThisMonth++;
		if(newDay <= daysInThisMonth)
			finished = true;
		else
		{
			newDay = newDay - daysInThisMonth;
			newMonth = (newMonth % 12) + 1;
			if (newMonth == 1)
				newYear++;
		}
	}

	returnDate.Initialize(newMonth,newDay, newYear);
	return returnDate;
}