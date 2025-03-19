#include <iostream>
using namespace std;

bool isHarshad(int number) {
    int sumOfDigits = 0;
    int originalNumber = number; 

    while (number > 0) {
        sumOfDigits += number % 10;
        number /= 10;
    }
    return (originalNumber % sumOfDigits == 0);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isHarshad(num)) {
        cout << num << " is a Harshad number.\n";
    } else {
        cout << num << " is not a Harshad number.\n";
    }

    return 0;
}
