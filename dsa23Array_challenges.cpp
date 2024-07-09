// Give the maximum number between the array
//  #include <iostream>
//  using namespace std;

// int main()
// {
//     int mx = -1999999;
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         mx = max(mx, a[i]);

//     }
//     cout << mx << endl;
//     return 0;
// }
/*SUBARRAY v/s SUBSEQUENCE
SUBARRAY:-
CONTINUOUS PART OF THE ARRAY:-IT IS THE SMALL PARTS OF THE ARRAY
Number of subarray of an array with n elements=nC2+n=n*(n+1)/2 */
/*SUBSEQUENCE
A subsequence is a sequence that can be derived an array by selecting zero or more
elements without changing the order of the remaining elements
Number of subsequences of an array with n elements =2^n.*/

/*EVERY SUBARRAY IS A SUBSEQUENCE BUT EVERY SUBSEQUENCE IS MOT A SUBARRAY*/
// sum of subarray
/*APPROACH:
NESTED LOOP*/
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int curr=0;

//     for(int i=0;i<n;i++){
//         curr=0;
//         for(int j=i;j<n;j++){
//             curr+=a[j];
//             cout<<curr<<endl;
//         }
//     }
//     return 0;
// }
// LONGEST ARITHEMATIC SUBARRAY
// #include <iostream>
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
//     int ans = 2;
//     int pd = a[1] - a[0];
//     int j = 2;
//     int curr = 2;
//     while (j < n)
//     {
//         if (pd == a[j] - a[j - 1])
//         {
//             curr++;
//         }
//         else{
//             pd=a[j]-a[j-1];
//             curr=2;
//         }
//         ans=max(ans,curr);
//         j++;
//     }
//     cout<<ans<<endl;
//     return 0;
// }
// recoed breaking day:-1.strictle greater than all teh previous values
// 2.strictly greater than following value.
/*BRUTE FORCE
iterate over all the elements and check if it is record breakingday or not
note: to check if a[i] is a record breaking day we have to iterate over a[0],a[1],.....a[i-1]
*/
/*OPTIMISED APPROACH
intuition:if we can optimise step(1)then we can optimise out overall solution
for step (1):we need tgo check if a[i]>{a[i-1],a[i-2],...a[0]}
which is same as a[i]>max(a[i-1],.....a[0])
for this we will keep a variable mx which will store the maximum value till a[i].
then we just need to check*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    a[n] = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    int ans = 0;
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
        {
            ans++;
        }
        mx = max(mx, a[i]);
    }
    return 0;
}