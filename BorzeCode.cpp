#include <iostream>
#include <cstring>
using namespace std;

void borze(char string[200])
{
    int length = strlen(string);
    for (int i = 0; i < length; i++)
    {
        if (string[i] == '-' && string[i + 1] == '-')
        {
            cout << 2;
            i++;
        }
        else if (string[i] == '-' && string[i + 1] == '.')
        {
            cout << 1;
            i++;
        }
        else if (string[i] == '.')
        {
            cout << 0;
        }
    }
}

int main()
{
    char code[200];
    cin >> code;
    borze(code);
    return 0;
}
