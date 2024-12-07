#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "\nBefore swapping:\n";
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    swap(&num1, &num2);

    cout << "\nAfter swapping:\n";
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
