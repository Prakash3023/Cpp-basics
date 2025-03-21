#include <iostream>
using namespace std;

bool isSpyNumber(int n) {
    int sum = 0, product = 1;
    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
    }
    return sum == product;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isSpyNumber(num)) {
        cout << num << " is a Spy Number." << endl;
    } else {
        cout << num << " is not a Spy Number." << endl;
    }
    return 0;
}










