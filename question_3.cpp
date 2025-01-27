#include<iostream>
using namespace std;
int main(){
    int n , a = 0;
    while(n!= 0){
        cout << "Enter the value for n or 0 to end" << endl;
        cin >> n;
        
        if (a > n){
            cout<< a <<" is largest";
        }
        else{
             cout<< n <<" is largest";
        }
        a=n;
    }
    

}