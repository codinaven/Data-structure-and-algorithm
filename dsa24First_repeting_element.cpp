// first repeting element
// #include "bits/stdtr1c++.h"
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     const int N = 1e6 + 2;
//     int idx[N];
//     for (int i = 0; i < N; i++)
//     {
//         idx[i] = -1;
//     }
//     int minidx = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (idx[a[i]] != -1)
//         {
//             minidx = min(minidx, idx[a[i]]);
//         }
//         else
//         {
//             idx[a[i]] = i;
//         }
//     }
//     if (minidx == INT_MAX)
//     {
//         cout << "-1" << endl;
//     }
//     else
//     {
//         cout << minidx + 1 << endl;
//     }
//     return 0;
// }

// PROBLEM:
// Given an unsorted array A of sixe N of non negative integer find a continuous subarray which adds to a given number S.
/*BRUTE FORCE:
Find sum of all possible subarray s if any of the sym equates to S
output the starting and ending index of the subarray.*/
// two pointer approch
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, s;
//     cin >> n >> s;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int i = 0, j = 0, st = -1, en = -1, sum = 0;
//     while (j < n && sum + a[j] <= s)
//     {
//         sum += a[j];
//         j++;
//     }
//     if (sum == s)
//     {
//         cout << i + 1 << " " << j << endl;
//     }
//     while (j < n)
//     {
//         sum += a[j];
//         while (sum > s)
//         {
//             sum -= a[i];
//             i++;
//         }
//         if (sum == s)
//         {
//             st = i + 1;
//             en = j + 1;
//             break;
//         }
//         j++;
//     }
//     cout << st << " " << en;
//     return 0;
// }
/*SMALLEST POSSITIVE MISSING NUMBER
PROBLEM:
You are given an array arr[] of N integers including 0
the task is to find the smallest positive number missing from the array
*/