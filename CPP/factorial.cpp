#include <iostream>
using namespace std;

// fac of n numbers
int factorialN(int n) {
    int fact = 1;
    
    for(int i=1; i<=n; i++) {
        fact *= i;
        
    }
    return fact;
}

int main() {
    cout << "Factorial of 5 is " << factorialN(5) << endl; // and b are argumensts
    cout << "Factorial of 6 is " << factorialN(6) << endl;

    return 0;
}
