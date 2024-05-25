#include <iostream>
#include <string>
#include <cstring>
using namespace std;
string execution(string s)
{
    int length = s.size();
    for (int i = 0; i < length; i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9' || s[i] == '+')
        {
            return "YES";
        }
    }
    return "NO";
}
int main()
{
    string p;
    cin >> p;
    string result = execution(p);
    cout << result << endl;
    return 0;
}