// REVERSE THE DIGITS OF THE NUMBER
// number : 9876543
// display : 3456789
/*
INPORTANT NOTE:
    eg: 1234
    1234 % 10 = 4    -----> % 10 = gives last digit 
    1234 / 10 = 123  -----> / 10 = remove last digit
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,rem, rev=0;
    cout<< "Enter number: "<<endl;
    cin>>n;
    //store original no before modification
    int Original=n;
    //while loop is used here as we dont know the exact no of iteration
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout << "Reverse of "<< Original << " is: " << rev << endl;
    return 0;
}