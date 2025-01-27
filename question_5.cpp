#include<iostream>
using namespace std;
int main(){
    int shipping, item;
    cout << "Enter Value if item $" << endl;
    cin >> item;
    if(item > 0){
    if(item <= 50){
        cout << "Shipping is: $5 ";
    }
    else if(item >= 50 && item <= 200){
        cout << "Shipping is: $10 ";
    }
    else if(item >= 200){
        cout << "You can enjoy free shipping!";
    }
    }
    else{
        cout << "Enter a positive no";
    }
}