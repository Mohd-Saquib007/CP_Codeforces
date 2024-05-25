#include <iostream>
using namespace std;

int amazingPerformances(int n, int points[10000])
{
    int amazingCount = 0;
    int bestRecord = points[0];
    int worstRecord = points[0];

    for (int i = 1; i < n; i++)
    {
        if (points[i] > bestRecord || points[i] < worstRecord)
        {
            amazingCount++;
        }
        bestRecord = max(bestRecord, points[i]);
        worstRecord = min(worstRecord, points[i]);
    }
    return amazingCount;
}
int main()
{
    int n, points[10000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> points[i];
    }
    int result = amazingPerformances(n, points);
    cout << result;
    return 0;
}