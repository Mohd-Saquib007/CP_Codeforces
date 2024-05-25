#include <iostream>
using namespace std;
int minCapacity(int n, int a[1000], int b[1000])
{
    for (int i = 1; i < n; i++)
    {
        if ((b[i - 1] - a[i] + b[i]) > (b[i] - a[i + 1] + b[i + 1]))
        {
            return b[i - 1] - a[i] + b[i];
        }
    }
}
int main()
{
    int n, a[1000], b[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> b[j];
    }
    int result = minCapacity(n, a, b);
    cout << result;
    return 0;
}