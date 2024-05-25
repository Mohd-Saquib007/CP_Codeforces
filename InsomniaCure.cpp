#include <iostream>
using namespace std;
int damagedDragons(int a, int b, int c, int d, int e)
{
    int count = 0;
    for (int i = 1; i <= e; i++)
    {
        if (i % a == 0 || i % b == 0 || i % c == 0 || i % d == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int k, l, m, n, d;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    int result = damagedDragons(k, l, m, n, d);
    cout << result;
    return 0;
}