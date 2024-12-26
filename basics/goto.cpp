#include<iostream>
using namespace std;

int main(){
    int n, i, count;
    char choice;

    start:  // Label where the control will go if 'goto start' is used
    count = 0;  // Reset count for every new number

    cout << "Enter a number (Enter 0 or negative to quit): ";
    cin >> n;

    if (n <= 0) {
        goto end;  // Exit if n is less than or equal to 0
    }

    cout << "Factors of " << n << ": ";
    for(i = 1; i <= n; i++){
        if(n % i == 0){
            cout << i << " ";
            count++;
        }
    }
    cout << endl;

    if(count == 2){
        cout << n << " is a prime number" << endl;
    } else {
        cout << n << " is not a prime number" << endl;
    }

    cout << "Do you want to check another number? (y/n): ";
    cin >> choice;

    if(choice == 'y' || choice == 'Y'){
        goto start;  // Jump back to 'start' to check another number
    }

    end:  // Label where the control will jump to when exiting
    cout << "Program terminated." << endl;
    return 0;
}
