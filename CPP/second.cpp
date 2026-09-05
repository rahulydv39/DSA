#include <iostream>
using namespace std;

int main() {
  /*  int n;
    cout << "Give your N:  ";
    cin >> n;

    cout << "Your N is : " << n << endl;

    // if-else

    if (n > 0) {
      cout << "N is greater than zero" << endl;
    } else {
      cout << "N is negative number" << endl;
    }
    */

  // to take two input
  /*  int a, b;
    cout << "Enter the value of a and b with space" << endl;
    cin >> a >> b;

    cout << "value of a and b is : " << a << " " << b << endl;

    if (a > 0) {
      cout << "A is positive" << endl;
    } else if (a < 0) {
      cout << "A is Negaive " << endl;
    } else {
      cout << "A is zero" << endl;
    }
      */

  // loops

  /*  int n;
    cin >> n;

    int i = 1;
    int sum = 0;

    while (i <= n) {
      sum += i;

      i++;
    }
    cout << "Value of the sum is :" << sum << endl;
  */
  int n;
  cin >> n;

  int i = 2;

  while (i < n) {
    if (n % i == 0) {
      cout << "N is not prime" << endl;
    }
    i++;
  }
}