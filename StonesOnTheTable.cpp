#include <iostream>
#include <string>
using namespace std;
int stones(int n, char s[50])
{
    int l = 0;
    char s1[50];
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            s1[l] = s[i];
            l++;
        }
    }
    return l;
}
int main()
{
    int n;
    char s[50];
    cin >> n;
    cin >> s;
    int result = stones(n, s);
    cout << result << endl;
    return 0;
}