#include <iostream>
using namespace std;

int main() {
   string passcode = "2222", user;
   int i=5;
   cout<<"Enter Password\n";
   cin >> user;
   if(user == passcode){
        cout<<"\nYour device is unlocked\n";
   }
   else{
    while(user != passcode){
        if(i>0){
            cout<<"Enter correct Password\n";
            cout<<"Remaing Attempts " << i << endl;
            cin >> user;
            i--;
        }
        else{
            cout<<"Your device is permenantly locked\n";
            cout<<"Please contact service center !\n";
            break;

        }
    }
   }
    return 0;
}