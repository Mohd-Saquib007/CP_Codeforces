#include <iostream>
using namespace std;
bool primeNumber(int n, int m)
{
    for (int i = 2; i < 50; i++)
    {
        if (m % i == 0 && m != i && m < n)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int m, n;
    cout << "Enter your first prime number: ";
    cin >> n;
    cout << "Enter your second prime number: ";
    cin >> m;
    if (primeNumber(n, m))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}