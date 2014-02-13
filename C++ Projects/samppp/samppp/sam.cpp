#include <iostream>
using namespace std;

void test(int i);


int main()
{
	int i = 4;

	test(i);
}

void test(int i)
{
	if (i<8)
	{
		test(i+1);
		cout<<i;
	}
}