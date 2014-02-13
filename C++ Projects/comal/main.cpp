#include <iostream>
//#include <math>

using namespace std;

int power(int x, int n);
int rec_power(int x, int n);

int main()
{
    int x1,x2,n1,n2;


    cout<<"Enter an integer for x for he interative algorithm: "<<endl;
    cin>>x1;
    cout<<"Enter an interger larger or equal to 0: "<<endl;
    cin>>n1;

    power(x1,n1);

    cout<<"Enter an integer for x for he interative algorithm: "<<endl;
    cin>>x2;
    cout<<"Enter an interger larger or equal to 0: "<<endl;
    cin>>n2;
    rec_power(x2,n2);




}


int  power (int x, int n)
{
	int i;
	int p = 1;

	for (i = 1; i <= n; i++)
		p = p * x;

	return p;
}

int  rec_power (int x, int n)
{
	if ( n == 1) return x;

	return x * rec_power(x, n-1);
}
