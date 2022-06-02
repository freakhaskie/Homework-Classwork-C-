#include <iostream>
#include <cstring>
using namespace std;

const int N = 10;

int main() 
{
	char str[N];
	unsigned long long sums = 0L;
	unsigned long long x;
	
	char* err2;
	while (cin.get(str, N)) 
	{
		x = strtoull(str, &err2, N);
		sums += x;
	}
	
	cout << "S = " << sums << "\n";
}
