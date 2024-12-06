#include <iostream>
using namespace std;

int countOccurrences(int arr[], int n, int x) {
    if (n == 0)
        return 0;
    int count = (arr[n - 1] == x) ? 1 : 0;
    return count + countOccurrences(arr, n - 1, x);
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    cout << "Enter the element to count: ";
    cin >> x;

    int result = countOccurrences(arr, n, x);
    cout << "The element " << x << " occurs " << result << " times in the array." << endl;

    return 0;
}
