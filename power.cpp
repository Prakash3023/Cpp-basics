//we can use <bits/stdc++.h> instead of all three
#include <iostream>
#include <iomanip>  // for fixed and setprecision
#include <cmath>    // for pow function

using namespace std;

int main()
{
    double x = 6.1, y = 4.8;
    double result = pow(x, y);
    cout << fixed << setprecision(2) << result << endl;
    return 0;
}