#include <iostream>
using namespace std;

// sum of n numbers
int sumN(int n) {
    
    int sum = 0;
    
    for(int i = 1; i<=n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    cout << "Sum of N numbers is " << sumN(5) << endl; // and b are argumensts
  

    return 0;
}
