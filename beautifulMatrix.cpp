#include <iostream>
using namespace std;
int intersection(int arr[5][5])
{
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                if (i != 2)
                {
                    if (i >= 2)
                    {
                        sum1 += i - 2;
                    }
                    else
                    {
                        sum1 += 2 - i;
                    }
                }

                if (j != 2)
                {
                    if (j >= 2)
                    {
                        sum2 += j - 2;
                    }
                    else
                    {
                        sum2 += 2 - j;
                    }
                }
            }
        }
    }
    return sum1 + sum2;
}
int main()
{
    int matrix[5][5];
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int moves = intersection(matrix);
    cout << moves << endl;
    return 0;
}