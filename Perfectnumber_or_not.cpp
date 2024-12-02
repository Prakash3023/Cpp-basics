#include <iostream>
using namespace std;

bool isPerfectNumber(int n) {
    if (n < 1) {
        return false;
    }

    int sum_of_divisors = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum_of_divisors += i;
        }
    }

    return sum_of_divisors == n;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPerfectNumber(number)) {
        cout << number << " is a perfect number." << endl;
    } else {
        cout << number << " is not a perfect number." << endl;
    }

    return 0;
}
