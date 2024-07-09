#include<iostream>
using namespace std;
char tolowerCase(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool checkpalantron(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
void reversestr(char name[],int n){
int s=0;
int e=n-1;
while(s<e){
swap(name[s++],name[e--]);
}
}
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter your name "<<endl;
    cin>>name;
    cout<<"Your name is ";
    cout<<name<<endl;
    cout<<"length "<<getlength(name)<<endl;
    int k=getlength(name);
    cout<<"Reverse of the string is ";
    reversestr(name,k);
    cout<<"reverse of my name is "<<name<<endl;
    cout<<"Palindrome or not "<<checkpalantron(name,k)<<endl;




    cout<<"CHARACTER is"<<tolowerCase('b')<<endl;
    
    return 0;
}