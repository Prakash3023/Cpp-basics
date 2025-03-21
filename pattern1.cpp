#include <iostream>
using namespace std;

int main() {
   

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
             if(i==0||j==0||i==5||j==5){
                cout<<"*";
             }
             else if(i==2){
                cout<<"*";
             }
             else if(i==1&&j==4){
                cout<<"*";
             }
             else{
                cout<<" ";
             }
        }
        cout << endl;
}
    return 0;
}