#include <iostream>
using namespace std;
void queue(int n, int t, char order[])
{
    for (int time = 0; time < t; time++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (order[i] == 'B' && order[i + 1] == 'G')
            {
                swap(order[i], order[i + 1]);
                i++;
            }
        }
    }
}
int main()
{
    char s[50];
    int n, t;
    cin >> n;
    cin >> t;
    for (int j = 0; j < n; j++)
    {
        cin >> s[j];
    }
    queue(n, t, s);
    for (int j = 0; j < n; j++)
    {
        cout << s[j];
    }
    return 0;
}