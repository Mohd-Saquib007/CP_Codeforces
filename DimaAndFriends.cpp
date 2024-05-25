#include <iostream>
#include <vector>
using namespace std;
int count(int n, vector<int> f)
{
}
int main()
{
    int n;
    vector<int> f;
    cin >> n;
    for (int i = 0; i < f.size(); i++)
    {
        f.push_bacK(f.begin() + i);
    }
    int result = count(n, f);
    cout << result << endl;
    return 0;
}