#include <iostream>
using namespace std;
int solution(int n, int arr[1001][3])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i][0] == 1 && arr[i][1] == 1) || (arr[i][0] == 1 && arr[i][2] == 1) || (arr[i][1] == 1 && arr[i][2] == 1))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    int arr[1001][3];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    int result = solution(n, arr);
    cout << result << endl;
    return 0;
}