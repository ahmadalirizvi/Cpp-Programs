#include<iostream>
using namespace std;

int main(){
    int salary, hr, da, pf, pt, gross_salary, net_salary;
    cout << "Please enter salary \n";
    cin >> salary;
    hr = 0.20 * salary;
    da = 0.15 * salary;
    gross_salary = salary + hr + da;
    pf = 0.12 * salary;  
    pt = 200;  
    net_salary = gross_salary - (pf + pt);
    cout << "Basic Salary: " << salary <<"$"<< endl;
    cout << "House Rent Allowance (20%): " << hr << "$"<< endl;
    cout << "Dearness Allowance (DA): (15%): " << da << "$"<< endl;
    cout << "Gross Salary: " << gross_salary << "$"<< endl;
    cout << "Provident Fund (12%): " << pf << "$"<< endl;
    cout << "Professional Tax: " << pt << "$"<< endl;
    cout << "Net Salary: " << net_salary << "$"<< endl;
    return 0;
}