#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    for(int i=0; i<n;i++){
        char ch ='A';
        for(int j=0; j <n ; j++){
            cout << ch;
            ch = ch + 1; //Type casting --> char + int => A + 1 => 66 + 1 = 67 => B
        }
        cout << endl;
    }
     
    return 0;
}


// SOLUTION
/*
N=4
A B C D
A B C D
A B C D
A B C D 

*/
