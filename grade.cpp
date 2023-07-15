#include <iostream>
using namespace std;
int main() {
    float a;
cout<<"Enter your number from 0 to 100: ";
while(!(cin >> a)) {

    cout <<"Please enter any number from 1 to 100: ";
    cin.clear();

}
 if (a >=0 && a<41 ) {
  cout << "Your grade is F";
}
else if (a >=41 && a<50 ) {
  cout << "Your grade is C";
}
else if (a >=51 && a<60 ) {
  cout << "Your grade is D";
}
else if (a >=61 && a<70 ) {
  cout << "Your grade is A-";
}
else if (a >=71 && a<80 ) {
  cout << "Your grade is A";
}
else if (a >=80 && a<101 ) {
  cout << "Your grade is A+";
}

else cout<<"Your number is INVALID!";
}

