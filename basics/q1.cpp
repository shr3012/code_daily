// CHECK INPUT IS POSITIVE OR NEGATIVE
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter value of n: " << endl;
    cin >> n;
    if(n>0){
        cout << "n is +ve" << endl;
    }else{
        cout << "n is -ve" << endl;
    }
    return 0;
}
