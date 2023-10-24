#include <iostream>
using namespace std;

int main() {
    int s;
    long factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> s;

    if (s < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= s; i++) {
            factorial *= i;
        }
        cout << "Factorial of " << s << " = " << factorial;    
    }

    return 0;
}
