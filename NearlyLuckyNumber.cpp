#include <iostream>
using namespace std;
void luckyNumber(long long int number)
{
    int count = 0;
    while (number != 0)
    {
        int digit = number % 10;
        if (digit == 4 || digit == 7)
        {
            count++;
        }
        number = number / 10;
    }
    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    long long int n;
    cin >> n;
    luckyNumber(n);
    return 0;
}