#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool isMagicNumber(int n) {
    while (n >= 10) {
        n = sumOfDigits(n);
    }
    return n == 1;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isMagicNumber(num)) {
        cout << num << " is a Magic Number." << endl;
    } else {
        cout << num << " is not a Magic Number." << endl;
    }
    return 0;
}  
