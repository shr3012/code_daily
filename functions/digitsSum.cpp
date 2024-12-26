#include<bits/stdc++.h>
using namespace std;

int sum(int a){
    int s = 0;
    while(a!=0){
        
        int rem = a % 10;
        s = s + rem;
        a = a / 10;
    }
    cout << "in fn a is : " << a << endl;
    return s;
}


int main(){
    int a = 1234;
    int result = sum(a);
    cout << result << endl;

    cout << "in main fn a is : " << a << endl;
    
    return 0;
}


