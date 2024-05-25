#include <iostream>
using namespace std;
float volume(int n, int vol[100])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + vol[i];
    }
    return static_cast<float>(sum) / n;
}
int main()
{
    int n, vol[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> vol[i];
    }
    float result = volume(n, vol);
    cout << result;
    return 0;
}