class FractionType
{
public:
	void Initialize(int numerator, int denominator);
	//Function: Initialize the Fraction
	//Pre: Numerator and denominator are in reduced form
	//post: Fraction is initialized
	int GetNumerator();
	//Function: returns the value of the numerator
	//Pre: Fraction has been initialized
	//Post: numerator is returned
	int GetDenominator();
	//Function: Returns the value of the denominator
	//Pre: Fraction has been initialized
	//Post: denominator is returned
	bool IsZero();
	//FUnction: Determines if fraction is zero
	//Pre: FRaction has been initialized
	//Post: REturns true if numerator is zero, false otherwise
	bool IsNotProper();
	//Function: Determines if fraction is a proper fraction
	//Pre: Fraction has been initialized
	//Post: Returns true if fraction is greater than one, false otherwise
	int ConvertToProper();
	//Function: Converts the fraction to a whole number and a fractional part
	//Pre: Fraction has not been initialized, is in reduced form, and is not a proper fraction
	//Post: Returns whole number
	//		Remaining fraction is original fraction minus the
	//		whole number; fraction is in reduced form
	FractionType Add(FractionType second);
	FractionType Sub(FractionType second);
	FractionType Mult(FractionType second);
	FractionType Divid(FractionType second);
private:
	int num;
	int denom;
	

};