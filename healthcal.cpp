#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;
    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (m): ";
    cin >> height;
    bmi = weight / (height * height);
    if (bmi < 18.5)
        cout << "BMI: " << bmi << " (Underweight, Risk: Low)" << endl;
    else if (bmi >= 18.5 && bmi < 24.9)
        cout << "BMI: " << bmi << " (Normal, Risk: Low)" << endl;
    else if (bmi >= 25 && bmi < 29.9)
        cout << "BMI: " << bmi << " (Overweight, Risk: Moderate)" << endl;
    else if (bmi >= 30 && bmi < 34.9)
        cout << "BMI: " << bmi << " (Obese, Risk: High)" << endl;
    else
        cout << "BMI: " << bmi << " (Severely Obese, Risk: Very High)" << endl;
    return 0;
}
