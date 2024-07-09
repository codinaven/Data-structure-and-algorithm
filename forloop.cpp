//WATERMELLON PROBLEM

// #include <iostream>
// using namespace std;
// int main()
// {
//     int w;
//     cin >> w;
//     if(w>2){
//         if(w%2==0){
//             cout<<"YES";
//         }
//         else{
//             cout<<"NO";
//         }
//     }
//     else{
//         cout<<"NO";
//     }
    
// }


//B.BEFOR AN EXAM
#include<iostream>
using namespace std;

int main(){
    int d;
    cin>>d;
    int sumTime;
    cin>>sumTime;
    int minTime;
    cin>>minTime;
    int maxTime;
    cin>>maxTime;
    int Time;
    Time=sumTime/d;
    if(Time>minTime && Time<maxTime){
        cout<<"YES";
        cout<<Time<<endl;
        cout<<sumTime;
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}