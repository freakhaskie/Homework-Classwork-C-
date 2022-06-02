#include <iostream>
#include <cstdlib>

using namespace std;
 
int main()
{
    int n;
    cout << "Enter a matrix size:\n";
    cin >> n;
    int** a = new int*[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
    }
    cout << "Enter a matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Target matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[n-j-1][i] << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        delete [] a[i];
    }
    delete [] a;
    system("pause");
    return 0;
}
