#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;

    cout<< "Enter 3 no: \n";
    cin >> a;
    cin >> b;
    cin >> c;
    // if (a>b && a>c){
    //         cout << a<<" is largest";
    //     }
    // else if (b>a && b>c){
    //     cout << b << " is largest";
    // }
    // else {
    //     cout << c << " is largest";
    // }

    if (a >= b) {
        if (a >= c) {
            cout << a<<" is largest";
        } else {
            cout << c << " is largest";
        }
    } else {
        if (b >= c) {
            cout << b << " is largest";
        } else {
            cout << c << " is largest";
        }
    }
    


    }
