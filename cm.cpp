#include <iostream>
using namespace std;
 
// Driver code
int main()
{
    int a = 15, b = 20, max_num, flag = 1;
    max_num = (a > b) ? a : b;
 
    while (flag){
        if (max_num % a == 0 && max_num % b == 0) {
            cout << "LCM of " << a << " and " << b << " is "
                 << max_num;
            break;
        }
        ++max_num;
    }
    return 0;
}