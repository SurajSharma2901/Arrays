#include<bits/stdc++.h>
using namespace std;

bool  isPalindrome(int number){
    if(number < 0) return false;
    int original = number;
    int reverse = 0;
    if(number!=0 && number % 10 == 0) return false;
    while(number > 0){
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }
    return true;
}
int main(){
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    if(isPalindrome(number)){
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }
    return 0;
}