#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,n1=1;
	double E = 0.0001;
	double suma = 0.0;
	double an = 1.0, e = 2.71;

	cout << "Enter n: " << endl;
	cin >> n;

	//Рекурентна формула: an+1=an*(log(n+1)*e^(-sqrt(n+1)))

	while (an>E)
	{
		an = an * (log10(n + 1) * pow(e, -sqrt(n + 1)));
		suma += an;
	}
	
	cout << "Sum precision is: " << suma << endl;

	return 0;
}