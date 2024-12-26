// Decimal To Bianry ==> repeted division of no by 2 untill remainder is 0
/*
2 | 42 --> 0    |^
2 | 21 --> 1    |^
2 | 10 --> 0    |^
2 | 5  --> 1    |^
2 | 2  --> 0    |^
2 | 1  --> 1    |^   
  | 0

writing it from bottom to Top 101010 ==> binary of 42

*/


// convert no's from 2 to 10 in binary

#include <bits/stdc++.h>
using namespace std;

int decToBinary(int n){
    int ans = 0; //binary
    int pow = 1;

    while(n > 0){
        int rem = n % 2; // Get the remainder (0 or 1)
        n = n /2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans; // binary form
}


int main(){
    int n = 50;

    cout << decToBinary(n) << endl;
    return 0;
}