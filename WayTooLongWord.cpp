#include <iostream>
#include <cstring>
using namespace std;
void word(int n, char s[101][101])
{
    for (int i = 0; i < n; i++)
    {
        int length = strlen(s[i]);
        if (length > 10)
        {
            cout << s[i][0] << (length - 2) << s[i][length - 1] << endl;
        }
        else if (length <= 10)
        {
            cout << s[i] << endl;
        }
    }
}
int main()
{
    int n;
    char s[101][101];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    word(n, s);
    return 0;
}