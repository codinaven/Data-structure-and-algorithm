#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n "<<endl;
    cin >>n;
    bool isPrime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"N0T A PRIME NO"<<endl;
            isPrime=0;
            break;
        }
        if(isPrime==0){
            cout<<"Not a prime number"<<endl;
        }
        else
        {
            cout<<"is a prime number"<<endl;
        }
    }
    return 0;
}