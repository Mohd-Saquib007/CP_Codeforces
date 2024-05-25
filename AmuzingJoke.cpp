#include <iostream>
#include <cstring>
#include <string>
using namespace std;
string joke(char s1[101], char s2[101], char s3[101])
{
    int count = 0;
    int length1 = strlen(s1);
    int length2 = strlen(s2);
    int length3 = strlen(s3);
    if (length3 != (length1 + length2))
    {
        return "NO";
    }
    for (int i = 0; i < length1; i++)
    {
        for (int j = 0; j < length3; j++)
        {
            if (s1[i] == s3[j])
            {
                s3[j] = '0';
                count++;
                break;
            }
        }
    }
    for (int i = 0; i < length2; i++)
    {
        for (int j = 0; j < length3; j++)
        {
            if (s2[i] == s3[j])
            {
                s3[j] = '0';
                count++;
                break;
            }
        }
    }
    if (count == length3)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}
int main()
{
    char s1[101];
    char s2[101];
    char s3[101];
    cin >> s1;
    cin >> s2;
    cin >> s3;
    cout << joke(s1, s2, s3) << endl;
    return 0;
}
