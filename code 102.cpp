#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << endl;
    cout << "Enter the size of one of the diagonals of the rhombus, which must be a natural number greater than 1: ";
    cin >> n;
    cout << endl;
    if (n % 2 == 0)
        n = n + 1;
    for (i = 1; i <= n / 2; ++i)
        cout << " ";
    cout << "*" << endl;
    for (i = 2; i <= n / 2 + 1; ++i)
    {
        for (j = 1; j <= n / 2 + 1 - i; ++j)
            cout << " ";
        cout << "*";
        for (j = n / 2 + 3 - i; j <= n / 2 - 1 + i; ++j)
            cout << " ";
        cout << "*" << endl;
    }
    for (i = n / 2 + 2; i <= n - 1; ++i)
    {
        for (j = 1; j <= i - n / 2 - 1; ++j)
            cout << " ";
        cout << "*";
        for (j = i - n / 2 + 1; j <= 3 * (n + 1) / 2 - i - 2; ++j)
            cout << " ";
        cout << "*" << endl;
    }
    for (i = 1; i <= n / 2; ++i)
        cout << " ";
    cout << "*";
    cout << endl;
}
