// C++ Program to sort a string of characters
// using sort() from STL
#include <bits/stdc++.h>
using namespace std;

int main() {
  
      
    string str1 = "Life is beautiful";
      char str2[] = "programming";
      int len2 = strlen(str2);
    sort(str1.begin(), str1.end());
      sort(str2, str2 + len2);

    cout << str1 << endl;
      cout << str2;
    return 0;
}
