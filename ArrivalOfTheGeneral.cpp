#include <iostream>
using namespace std;

int swap(int n, int a[100])
{
    int moves = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                a[j] = a[j - 1];
                i = 0;
                moves++;
            }
            else
            {
                a[j] = a[j + 1];
                i = 0;
                moves++;
            }
        }
    }
    return moves;
}

int main()
{
    int n, a[100];
    cout << "Enter number of elements (up to 100): ";
    cin >> n;
    cout << "Enter values of elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int result = swap(n, a);
    cout << result;
    cout << endl;
    return 0;
}
