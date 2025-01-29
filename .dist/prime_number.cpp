//To check whether a number is prime or not

#include<iostream>
using namespace std;
int main(){
    int count=0;
    int num=5;
    for(int i=1;i<=num;i++){
        if(num%i==0){
       count++;
        }
    }
    if(count==2){
        cout<<"It is a Prime number";
    }
    else{
        cout<<"It is  Not a Prime number";
    }
}