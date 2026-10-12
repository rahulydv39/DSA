#include <iostream>
using namespace std;

// min of 2 numbers
int minOfTwo(int a, int b) {
    if(a<b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    cout << "Min of 2 numbers is " << minOfTwo(9, 55) << endl; // and b are argumensts
  

    return 0;
}
