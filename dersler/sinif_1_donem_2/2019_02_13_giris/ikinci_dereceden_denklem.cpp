#include <iostream>
#include <cmath>
using namespace std;

//Prototypes
double delta_hesapla(int a, int b, int c);


//Main
int main(int argc, char* argv[])
{
	int a, b, c;
	double x1, x2, delta;

	cout << "a: ", cin >> a;
	cout << "b: ", cin >> b;
	cout << "c: ", cin >> c;

	delta = delta_hesapla(a, b, c);

	if(delta < 0)
	{
		cout << "Delta: " << delta << " yani delta 0'dan kucuk.\n";
	}
	else if(delta == 0)
	{
		x1 = -b-sqrt(delta)/2*a;
		cout << "Delta: " << delta << "\n";
		cout << "x: " << x1 << "\n";
	}
	else if(delta > 0)
	{
		x1 = -b-sqrt(delta)/2*a;
		x1 = -b+sqrt(delta)/2*a;

		cout << fixed << "x1: " << x1 << "\n";
		cout << fixed << "x2: " << x2 << "\n";
	}
		
	return 0;
}


//Functions
double delta_hesapla(int a, int b, int c)
{
	double d = b*b-4*a*c;
	return d;
}
