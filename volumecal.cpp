#include<iostream>
using namespace std;

int main(){
    double volume, radius, pie;
    pie = 3.14;
    cout << "Enter radius of sphere:" << endl;
    cin >> radius;

    volume = (4/3) * pie * (radius*radius*radius);   
    cout << "Radius of sphere is " << volume << endl;

    return 0;
}

