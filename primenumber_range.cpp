#include<iostream>
using namespace std;
 #include <iostream>
using namespace std;
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main() {
    int lower, upper;
    cout << "Enter the lower bound of the interval: ";
    cin >> lower;
    cout << "Enter the upper bound of the interval: ";
    cin >> upper;       
    cout << "Prime numbers between " << lower << " and " << upper << " are: ";
    for (int i = lower; i <= upper; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
