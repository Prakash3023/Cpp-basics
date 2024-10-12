#include <iostream>
using namespace std;
 int main(){
    int year=2000;
    if(year%400==0){
        cout<<"this is leap year";
    }
    else if(year%100==0){
        cout<<"this is not aleap year";
    }
    else if(year%4==0){
        cout<<"this is  s leap year";
    }
    else{
        cout<<"this is not a leap year";
    }
    return 0;
 }