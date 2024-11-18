#include<iostream>
using namespace std;
int main(){
    double hour, min, h, m, s, res;
    cout << "Enter Hour: \n";
    cin >> h;
    cout << "Enter Minuts: \n";
    cin >> m;
    cout << "Enter Seconds: \n";
    cin >> s;

    hour = h*3600;
    min = m*60;
    res = hour + min + s;

    cout << "Time in sec = " << res << endl;
    return 0;
}
