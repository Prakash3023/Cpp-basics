#include <bits/stdc++.h>  

using namespace std;  
 
string test(string text) {
  for (int i = 1; i < text.size(); i++) {  
    if (isupper(text[0]) != isupper(text[i])) {  
      return "False";  
    }
  }
  return "True"; 
}

int main() {
  string text = "ABCDEF";  
  cout << "Original string: " << text;  
  cout << "\n\nCheck whether the said string is uppercase or lowercase: ";
  cout << test(text) << endl;  
}
