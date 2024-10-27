 #include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n <= 0)
        return false;
    return (n & (n - 1)) == 0;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPowerOfTwo(num))
    {
        cout << num << " is a power of 2." << endl;
    }
    else
    {
        cout << num << " is not a power of 2." << endl;
    }

    return 0;
}
