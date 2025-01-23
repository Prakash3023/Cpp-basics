//To find the fibonacci series
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
     int T1 = 0, T2 = 1, nexterm;
    cout << "Fibonacci Series: " << T1 << ", " << T2;
    for (int i = 3; i <= n; ++i) {
        nexterm = T1 + T2;
        cout << ", " << nexterm;
        T1 = T2;
        T2 = nexterm;
    }
    cout << endl;
    return 0;
}