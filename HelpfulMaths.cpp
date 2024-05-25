#include <iostream>
using namespace std;

void add(char s1[100], char s2[100])
{
    char a[100];
    int l = 0;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            a[l] = '1';
        }
        else
        {
            a[l] = '0';
        }
        l++;
    }
    a[l] = '\0';
    cout << a;
}

int main()
{
    char s1[100], s2[100];
    cin >> s1;
    cin >> s2;
    add(s1, s2);
    return 0;
}
