#include <iostream>
#include <cstring>
#include <fstream>
#include <cmath>

using namespace std;

void stars(int n) 
{
    for (int i = 0; i < n; i++) 
    {
        cout << "+++++++++";
    }
    cout << endl;
}

int main() 
{
    unsigned long long summ = 0;
    string digits;
    int n;
    
    cout.precision(3);
    cout.fill(' ');
    cin >> n;
    stars(n);
    
    for (int i = 1; i < n + 1; i++) 
    {
        cout.width(5);
        cout << i << " ";
    }
    cout << endl;
    stars(n);
    
    for (int i = 1; i < n + 1; i++) 
    {
        cout.width(6);
        double sqrt_n = sqrt(i);
        cout << sqrt_n << " ";
    }
}