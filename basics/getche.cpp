#include<iostream>
using namespace std;

int main(){
    int n = 1, i, count; // Initialize n
    char choice;
    
    while(n > 0){ // Check until user quits
        cout << "Enter n (Enter 0 or a negative number to quit): ";
        cin >> n;
        
        if (n <= 0) {
            break; // Exit if user enters 0 or a negative number
        }

        cout << "Factors of " << n << ": ";
        count = 0; // Reset count for each new number

        for(i = 1; i <= n; i++){
            if(n % i == 0){
                cout << i << " "; // Print the factors
                count++; // Count the number of factors
            }
        }
        cout << endl;

        // Check if the number is prime (only two factors: 1 and itself)
        if(count == 2){
            cout << n << " is a prime number" << endl;
        } else {
            cout << n << " is not a prime number" << endl;
        }

        // Ask user if they want to continue
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;

        if(choice == 'n' || choice == 'N'){
            break; // Exit the loop if user enters 'n' or 'N'
        }
    }

    return 0;
}
