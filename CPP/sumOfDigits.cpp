#include <iostream>
using namespace std;

// sum of the digits of a number
int sumOfDigits(int num) {
    int digSum = 0;
    
    while(num >0) {
        int lastDig = num % 10;
        num /= 10;
        
        digSum += lastDig;
    }
    
    return digSum;
}

int main() {
    cout << sumOfDigits(567) <<endl;

    return 0;
}