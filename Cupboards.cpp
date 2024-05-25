#include <iostream>
using namespace std;
int time(int n, int arr[10001][2])
{
    int seconds = 0;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 = sum1 + arr[i][0];
    }
    for (int j = 0; j < n; j++)
    {
        sum2 = sum2 + arr[j][1];
    }
    for (int i = 0; i < n; i++)
    {
        if (sum1 > n / 2)
        {
            if (arr[i][0] == 0)
            {
                seconds++;
            }
        }
        else
        {
            if (arr[i][0] == 1)
            {
                seconds++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (sum2 > n / 2)
        {
            if (arr[i][1] == 0)
            {
                seconds++;
            }
        }
        else
        {
            if (arr[i][1] == 1)
            {
                seconds++;
            }
        }
    }
    return seconds;
}
int main()
{
    int n, a[10001][2];
    cin >> n;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[j][i];
        }
    }
    int result = time(n, a);
    cout << result;
    return 0;
}
