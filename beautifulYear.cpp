#include <iostream>
using namespace std;
int minYear(int year)
{
    while (true)
    {
        year++;
        int l = 0;
        int num[4];
        int originalYear = year;
        while (originalYear != 0)
        {
            int j = originalYear % 10;
            originalYear = originalYear / 10;
            num[l] = j;
            l++;
        }
        if ((num[0] != num[1] && num[0] != num[2] && num[0] != num[3]) &&
            (num[1] != num[2] && num[1] != num[3]) &&
            (num[2] != num[3]))
        {
            return year;
        }
    }
}
int main()
{
    int y;
    cin >> y;
    int result = minYear(y);
    cout << result << endl;
    return 0;
}
