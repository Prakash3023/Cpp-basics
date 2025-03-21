#include <iostream>
using namespace std;

bool isDuckNumber(string num) {
    int n = num.length();
    int i = 0;
    while (i < n && num[i] == '0') {
        i++;
    }
    while (i < n) {
        if (num[i] == '0') {
            return true;
        }
        i++;
    }
    return false;
}

int main() {
    string num;
    cout << "Enter a number: ";
    cin >> num;

    if (isDuckNumber(num))
        cout << num << " is a Duck Number.\n";
    else
        cout << num << " is NOT a Duck Number.\n";

    return 0;
}
