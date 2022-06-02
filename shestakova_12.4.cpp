#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() 
{
	unsigned n;
	cout << "n = ";
	cin >> n;
	int* m = new int[n];
	for (unsigned i = 0; i < n; i++) 
	{
		cin >> m[i];
	}
	double* x = new double[n];

	const char fname[] = "data.txt";
	fstream f;
	f.open(fname, fstream::in);
	
	if (f.bad()) 
	{
		cerr << "error opening file" << fname << "\n";
		delete[]x;
		delete[]m;
		return 0;
	}
	
	unsigned k = 0;
	double a;
	while (f >> a && k < n)
	{
		x[k++] = a;
	}
	
	if (k != n) 
	{
		cerr << "read only" << k << "numbers but neede" << n << "!\n";
	}
	
	else 
	{
		const char gname[] = "data1.txt";
		fstream g;
		g.open(gname, fstream::out);
		for (unsigned i = 0; i < n; i++) {
			g << pow(x[i], m[i]) << "";
		}
		g.close();
	}
	f.close();
	delete[]x;
	delete[]m;
}
