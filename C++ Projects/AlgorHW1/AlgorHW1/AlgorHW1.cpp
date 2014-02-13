#include <iostream>
#include <iomanip>

using namespace std;

int power(int x, int n);
int rec_power(int x, int n);

int main()
{
    int x,n;


    cout<<"Enter an integer for x for the algorithms: "<<endl;
    cin>>x;
    cout<<"Enter an integer larger or equal to 0: "<<endl;
    cin>>n;


	cout<<"\n N: "<<n<<endl;
	power(x,n);
	rec_power(x,n);

  }


int  power (int x, int n)
{
	int i;
	long double length=0;
	int p = 1;

	for (i = 1; i <= n; i++)
	{
		p = p * x;
		length++;
	}
	cout<<"Number of Iterations: "<<length<<endl;
	return p;
}

int  rec_power (int x, int n)
{
	static long double length=0;

	if ( n == 1){
		cout<<"Number of Recursive Calls: "<<length<<endl;
		return x;
	}
	length++;
	return x * rec_power(x, n-1);
	
}
