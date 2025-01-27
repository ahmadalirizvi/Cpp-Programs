#include <iostream>
using namespace std;

int main() {
    int num1, num2, opr;
    double res; 
    while(opr!=5){

    cout << "\n\nEnter Oprator:\n";
    cout << "\tPress 1 for + \n";
    cout << "\tPress 2 for - \n";
    cout << "\tPress 3 for * \n";
    cout << "\tPress 4 for / \n";
    cout << "\tPress 5 to exit \n";
    cin >> opr;

    if (opr!=5){

    cout << "Enter 1st value\n";
    cin >> num1;
    cout << "Enter 2nd value\n";
    cin >> num2;

    if (opr == 1 || opr == 2 || opr == 3 || opr ==4 || opr ==5){
        switch (opr)
        {
        case 1:
            res = num1 + num2;
            cout <<num1 << "+" << num2 << "=" << res;
            break;
        case 2:
            res = num1 - num2;
            cout <<num1 << "-" << num2 << "=" << res;
            break;
        case 3:
            res = num1 * num2;
            cout <<num1 << "*" << num2 << "=" << res;
            break;
        case 4:
            res = num1 / num2;
            cout <<num1 << "/" << num2 << "=" << res;
            break;
        case 5:
            break;
        
        default:
            break;
        }

    }
    else{
        cout << "Enter valid no for oprator!";
    }

    }
    
}







    return 0;
}
