#include<iostream>
using namespace std;
int main()
{
    int num=5;
     cout<<num<<endl;

     //address of nums
     cout<<"Adress of num is"<<&num<<endl;

     int *ptr=&num;
     cout<<"value is"<<*ptr;
     return 0;
}