#include<iostream>
using namespace std;
int main(){
    int sume=0, sumo=0, n, ie = 0, io = 0;
    cout << "Enter the value for n" << endl;
    cin >> n;
    while(ie<=n){
        sume+=ie;
        ie += 2;
    }
    while(io<=n){
        sumo+=io;
        io += 3;
    }
    cout <<"Divisible by 2 Sum: "<< sume << endl;
    cout << "Divisible by 3 Sum: "<< sumo;

    return 0;
}