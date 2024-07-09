// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int n;
//     bool flag;
//     cin >> n;
//     for (int i = 2; i < sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             cout << "not prime" << endl;
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//     {
//         cout << "prime" << endl;
//     }
//     return 0;
// }
// REVERSE A GIVEN NUMBER
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int reverse=0;
//     while(n>0){
//         int lastdigit=n%10;
//         reverse=reverse*10+lastdigit;
//         n=n/10;
//     }

//     cout<<reverse<<endl;
//     return 0;
// }
// finding weather the number is an amstrong number or not
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int originaln = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }
    if (sum == originaln)
    {
        cout << "amstrong number";
    }
    else
        cout << "not an amstrong number";
    return 0;
}