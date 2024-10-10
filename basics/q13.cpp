#include <iostream>
using namespace std;

int main() {
    // Display ASCII values for characters from 32 to 126
    cout << "Character\tASCII Value" << endl;

    for (int i = 32; i <= 126; i++) {
        cout << (char)i << "\t\t" << i << endl; // Directly using (char)i
    }

    return 0;
}
