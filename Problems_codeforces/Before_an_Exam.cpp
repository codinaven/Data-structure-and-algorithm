#include <iostream>
using namespace std;
void Exam(int d, int sumTime, int *minTime, int *maxTime, int minTotal = 0, int maxTotal = 0)
{
    for (int i = 0; i < d; i++)
    {
        minTotal += minTime[i];
        maxTotal += maxTime[i];
    }

    if (sumTime < minTotal || sumTime > maxTotal)
    {
        cout << "NO" << endl;
        return;
    }
   int remaningTime=minTotal;
   
}
int main()
{
    int d;
    cin >> d;
    int sumTime;
    cin >> sumTime;
    int minTime[d], maxTime[d];

    for (int i = 0; i < d; i++)
    {
        cin >> minTime[i];
        cin >> maxTime[i];
    }
    Exam(d, sumTime, minTime, maxTime);
    return 0;
}