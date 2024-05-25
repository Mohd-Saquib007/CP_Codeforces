#include <iostream>
#include <vector>
using namespace std;
int child(int n, int m, vector<int> arr)
{
    int i = 0;
    int length = arr.size();
    while (i < length)
    {
        if (arr[i] >= m)
        {
            arr.erase(arr.begin() + i);
            i++;
        }
        else
        {
            arr[i] = arr[i] - m;
            arr.push_back(arr[i]);
            arr[i + 1] = arr[i];
        }
    }
    return arr[0];
}
int main()
{
    int n, m;
    vector<int> arr(n);
    cin >> n;
    cin >> m;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    int result = child(n, m, arr);
    cout << result << endl;
    return 0;
}