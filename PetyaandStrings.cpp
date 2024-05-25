#include <iostream>
#include <cctype>
using namespace std;

int compare(string s1, string s2)
{
    int length1 = s1.size();
    int length2 = s2.size();

    for (int i = 0; i < length1; i++)
    {
        char char1 = s1[i];
        char char2 = s2[i];
        if (char1 >= 'A' && char1 <= 'Z')
        {
            char1 = char1 + 32;
        }
        if (char2 >= 'A' && char2 <= 'Z')
        {
            char2 = char2 + 32;
        }
        if (char1 < char2)
        {
            return -1;
        }
        else if (char1 > char2)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int result = compare(s1, s2);
    cout << result << endl;
    return 0;
}
