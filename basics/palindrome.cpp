// Palindrome is a number that reads the same backward as forward.
//eg: 121, 1331, 4554

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the no: " ;
    cin >> n;
    int original = n;
    int rev = 0;
    while (n>0){
        int rem=n%10;
        rev = rev * 10 + rem;
        n = n/10;
    }
    if(original == rev){
        cout << original << " is a Palindrome" << endl;
    }else{
        cout<< original << " is not a Palindrome" << endl;
    }
    return 0;
}