 #include<iostream>
using namespace std;

void kLargest(int nums[], int n, int k) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
            }
        }
    }

    cout << "Largest " << k << " Elements: ";
    for (int i = n - k; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    int nums[] = {4, 5, 9, 12, 9, 22, 45, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 4;

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    kLargest(nums, n, k);

    return 0;
}
