#include <iostream>
using namespace std;
int& func(int a){
    int num=a;
    int& ans=num;
    return ans;
}
int main()
{
    // int i = 5;
    // // create a ref variable
    // int &j = i;
    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++;
    // cout << i << endl;


    int n=5;
    
    func(n);
    return 0;
}