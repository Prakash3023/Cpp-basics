#include<iostream>
using namespace std;
void mul_table(int a) {
    for (int i = 1; i <= 10; i++) {
        cout << a << " * " << i << " = " << a * i << endl;
    }
}
int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "The multiplication table of " << a << " is:" << endl;
    mul_table(a); 
    return 0;
}
