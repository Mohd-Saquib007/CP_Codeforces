#include <iostream>
using namespace std;
int drinks(int n, int k, int l, int c, int d, int p, int nl, int np)
{
    int x = k * l;
    int y = x / nl;
    int z = c * d;
    int a = p / np;
    int ans = min(min(y, z), a) / n;
    return ans;
}
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int result = drinks(n, k, l, c, d, p, nl, np);
    cout << result << endl;
    return 0;
}