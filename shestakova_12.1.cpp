#include <iostream>

using namespace std;

int main () 
{
	double x, y;
	std::cout << "x = ";
	std::cin >> x;
	
	std::cout << "y = ";
	std::cin >> y; 
	
	std::cout << std::fixed << "x^y = " << pow(x, y) << std::endl;
	std::cout << std::scientific << "x^y = " << pow(x, y);
}