//Implementation file for Class FractionType
#include "frac.h"
void FractionType::Initialize(int numerator, int denominator)
{
	num = numerator;
	denom = denominator;
}
int FractionType::GetNumerator()
{
	return num;
}
int FractionType::GetDenominator()
{
	return denom;
}
bool FractionType::IsZero()
{
	return (num==0);
}
bool FractionType::IsNotProper()
{
	return (num>=denom);
}
int FractionType::ConvertToProper()
{
	int result;
	result = num / denom;
	num = num % denom;
	if (num==0)
		denom = 1;
	return result;
}
FractionType FractionType::Add(FractionType second)
{
	FractionType result;
	second.num=5;
	second.denom=6;
	result.num=(num*second.denom)+(denom*second.num);
	resukt.denom=denom * second.denom;
	//result.num=num;
	//result.denom=denom;
	return result;
}
FractionType FractionType::Sub(FractionType second)
{
	FractionType result;
	second.num=5;
	second.denom=6;
	num=(num*second.denom)-(denom*second.num);
	denom=denom * second.denom;
	result.num=num;
	result.denom=denom;
	return result;
}
FractionType FractionType::Mult(FractionType second)
{
	 FractionType  result;
	 second.num=5;
	 second.denom=6;
	 num= num * second.num;       
	denom = denom * second.denom;
	result.num=num;
	result.denom=denom;
	return result;
}
FractionType FractionType::Divid(FractionType second)
{
	FractionType result;
	second.num=5;
	second.denom=6;
	num = num * second.denom;     
	denom = denom * second.num;
	result.num=num;
	result.denom=denom;
	return result;  
	
}