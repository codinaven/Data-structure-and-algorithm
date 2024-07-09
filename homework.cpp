#include<iostream>
using namespace std;

int main(){
    int ammount;
    cout<<"Enter your amount "<<endl;
    cin>>ammount;
    int notes;
    cout<<"Enter the number of same amount of notes you want"<<endl;
    cin>>notes;
    while(ammount>0){
    switch (notes)
    {
    case 100:cout<<(ammount/100)<<endl;
        break;
    case 50:cout<<(ammount/50)<<endl;
        break;
    case 20:cout<<(ammount/20)<<endl;
        break;
    case 1:cout<<(ammount/1)<<endl;
        break;
            default:cout<<"Enter a valid note no ";
        break;
    }
    }
    return 0;
    }