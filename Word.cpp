#include <iostream>
#include <string>
using namespace std;
char conversion(char word[100])
{
    int l = 0, m = 0;
    int word1[100];
    char word2[100];
    for (int j = 0; j < 100; j++)
    {
        if (word[j] >= 'A' && word[j] <= 'Z')
        {
            word1[l] = word[j];
            l++;
        }
        else if (word[j] >= 'a' && word[j] <= 'z')
        {
            word2[m] = word[j];
            m++;
        }
    }
    for (int i = 0; i < 100; i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z' && m >= l)
        {
            word[i] = word[i] - 'A' + 'Z' + 7;
        }
        else if (word[i] >= 'a' && word[i] <= 'z' && m < l)
        {
            word[i] = word[i] - 'z' + 'a' - 7;
        }
    }
    cout << word;
    return 0;
}
int main()
{
    char word[100];
    cout << endl;
    cin >> word;
    char result = conversion(word);
    return 0;
}