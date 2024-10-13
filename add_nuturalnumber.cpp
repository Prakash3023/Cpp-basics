 #include<iostream>
using namespace std;

int findsum(int n) {
    int sum = 0; 
    for (int i = 1; i <= n; i++) {
        sum += i; 
    }
    return sum;  
}

int main() {
    int n = 7;
    cout << "The sumof first"<<n<<"natural number ="<<findsum(n);  
    return 0;
}
