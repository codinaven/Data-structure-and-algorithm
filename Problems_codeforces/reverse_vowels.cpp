#include<iostream>
using namespace std;


    string reverseVowels(string s) {
        int start = 0; // Pointer that starts from the beginning index
        int end = s.length() - 1; // Pointer that starts from the ending index

        while (start < end) {
            if ((s[start] == 'a' || s[start] == 'e' || s[start] == 'i' || s[start] == 'o' || s[start] == 'u') && 
                (s[end] == 'a' || s[end] == 'e' || s[end] == 'i' || s[end] == 'o' || s[end] == 'u')) {
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
            } else if ((s[start] != 'a' && s[start] != 'e' && s[start] != 'i' && s[start] != 'o' && s[start] != 'u')) {
                start++;
            } else if ((s[end] != 'a' && s[end] != 'e' && s[end] != 'i' && s[end] != 'o' && s[end] != 'u')) {
                end--;
            }
        }
        return s;
    }

int main(){
    string s = "hellow";
    cout<<reverseVowels(s)<<endl;
    return 0;
}
