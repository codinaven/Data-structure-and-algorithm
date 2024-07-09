#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<"capacity--> "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity--> "<<v.capacity()<<endl;
     v.push_back(23);
    cout<<"capacity--> "<<v.capacity()<<endl;
     v.push_back(4);
    cout<<"capacity--> "<<v.capacity()<<endl;
    cout<<"size--> "<<v.size()<<endl;
    cout<<"front-->"<<v.front()<<endl;
    cout<<"back"<<v.back()<<endl;
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;;
    }
    v.pop_back();
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.clear();
    return 0;
}