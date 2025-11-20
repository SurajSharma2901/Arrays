#include<bits/stdc++.h>
using namespace std;

bool isUppercase(char ch){
    return (ch >= 'A' && ch <= 'Z');
}
char toUppercase(char ch){
    if(isUppercase(ch)){
        return ch;
    } else{
        return ch - ('a' - 'A');
    }
}
int main(){
    string str;
    cout<<"Enter a string:";
    getline(cin, str);
    for(int i=0;i<str.length();i++){
        str[i] = toUppercase(str[i]);
    }
    cout<<"Uppercase string is:"<<str;
    return 0;
}