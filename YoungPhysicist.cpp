#include <iostream>
using namespace std;

string netForce(int n, int arr[3][100])
{
    int ans[300];
    int l = 0;
    int sum = 0;

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            sum = sum + arr[i][j];
        }
        ans[l] = sum;
        l++;
        sum = 0;
    }

    for (int i = 0; i < l; i++)
    {
        if (ans[i] != 0)
        {
            return "NO";
        }
    }

    return "YES";
}

int main()
{
    int n, arr[3][100];
    cin >> n;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << netForce(n, arr);
    return 0;
}
