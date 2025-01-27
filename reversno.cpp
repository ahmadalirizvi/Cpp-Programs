#include <iostream>
using namespace std;

int main() {
    int num, rev_num=0;
    cout << "Enter No: ";
    cin >> num;
    while(num){
        rev_num= (rev_num * 10) + (num % 10);
        num /= 10;
    } 
     cout << rev_num;












    return 0;
}