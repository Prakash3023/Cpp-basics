#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 30, b = 20;
    cout << "Before swapping a = " << a << " , b = " << b
         << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping a = " << a << " , b = " << b
         << endl;
    return 0;
}