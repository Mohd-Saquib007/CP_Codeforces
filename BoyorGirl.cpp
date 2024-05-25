#include <iostream>
#include <cstring>
using namespace std;

void check(char s[101])
{
    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        if (s[i] != 0)
        {
            for (int j = i + 1; j < length; j++)
            {
                if (s[j] != 0 && s[i] == s[j])
                {
                    s[j] = 0;
                }
            }
        }
    }
    int distinctCount = 0;
    for (int i = 0; i < length; i++)
    {
        if (s[i] != 0)
        {
            distinctCount++;
        }
    }

    if (distinctCount % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}

int main()
{
    char s[101];
    cin >> s;
    check(s);
    return 0;
}