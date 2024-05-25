#include <iostream>
#include <string>
using namespace std;
char captilization(char word[1000])
{

    if (word[0] >= 'a' && word[0] <= 'z')
    {
        word[0] = word[0] - 'z' - 7 + 'a';
    }
    cout << word;
    return 0;
}
int main()
{
    char word[1000];
    cin >> word;
    char result = captilization(word);

    return 0;
}