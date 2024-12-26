/*An Amrstrong number is a number that is equal to the sum of its own digits each raised
to the power of the number of digits.
eg:- 153 = 1^3+5^3+3^3 = 1 + 125 + 27 = 153 ----> Armstrong Number
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the no : ";
    cin >> n;
    int original = n;//store original no
    int temp = n;//for calculation
    int sum = 0;
    int count_digits = 0;
    //Find no of digits
    while(temp>0){
        temp = temp / 10;
        count_digits++;
    }
    while(n>0){
        int rem = n % 10;//extract the last digit
        
        //calculate r^n that is no to power of digit
        int power = 1;
        for(int i = 0; i<count_digits;i++){
            power *= rem;
        }
        sum += power;
        n = n /10;
    }
    if (sum == original) {
        cout << original << " is an armstrong no" <<  endl;
    }
    return 0;
}