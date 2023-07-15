#include <iostream>
using namespace std;
 int main() {

float a;
float b;
 cout<<"Enter your birth year: ";
 cin>>a;
 cout<<"Enter the present year: ";
 cin>>b;
 if (b<a)  {
    cout<<"ERROR!";
    return 0;
}
 cout<<"Your age is "<<b-a<<" years";

 }
