//Reversing a string
#include <iostream>
#include <cstring>
using namespace std;

void reverse(char name[]) {
    int s = 0;
    int e = strlen(name) - 1;
    
    while (s < e) {
        swap(name[s++], name[e--]);
    }  
} 

int main() {
    char name[20];
    cout << "Enter your name: ";
    cin >> name;
    cout << "Your name is: " << name << endl;
     
    reverse(name);
    cout << "Reversed String: " << name << endl;
     
    return 0;
}
 