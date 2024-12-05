#include <iostream>
using namespace std;

bool search2D(int arr[][3], int rows, int cols, int target) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == target)
                return true;
        }
    }
    return false;
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 5;
    if (search2D(arr, 3, 3, target))
        cout << "Element found!";
    else
        cout << "Element not found!";
    return 0;
}
