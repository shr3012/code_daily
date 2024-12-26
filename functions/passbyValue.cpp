#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b){
    a = a + 10; // 15
    b = b + 10; // 14
    int s = a + b; //29
    return s;
}


int main(){
    int a = 5 , b = 4;
    int result = sum(a,b);
    cout << result << endl;

    cout << a << endl;
    cout << b << endl;
    return 0;
}


/*-----------------EXPLANATION-------------------------------

In C++, function arguments are passed by value by default. 
This means that when you call sum(a, b), the values of a 
and b are copied into the sum function. Any modifications 
to a and b inside the sum function do not affect the original 
a and b in the main() function.


*/