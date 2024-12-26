// For Even Number
#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Using the conditional operator to check if the number is even or odd
    (num % 2 == 0) ? cout << num << " is even" : cout << num << " is odd";

    return 0;
}
