#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

void question1a() {
    int a = 1, b = 5;
    cout << "A  B" << endl;
    cout << "-----" << endl;
    while (a <= 5) {
        cout << a << "  " << b << endl;
        a++;
        b--;
    }
}

void question1b() {
    int num = 1, sum = 0;
    cout << "num  sum" << endl;
    cout << "-------" << endl;
    while (num <= 5) {
        sum += num;
        cout << num << "    " << sum << endl;
        num++;
    }
}

void question2() {
    for (char c = 'A'; c <= 'Z'; c++) {
        cout << c << " ";
    }
    cout << endl;
}

void question3() {
   int n, largest = INT_MIN, smallest = INT_MAX, total = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cout << "Enter number: ";
        cin >> num;
        largest = max(largest, num);
        smallest = min(smallest, num);
        total += num;
    }
    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;
    cout << "Average: " << (total / n) << endl;
}

void question4() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Prime numbers less than " << num << ": ";
    for (int i = 2; i < num; i++) {
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) cout << i << " ";
    }
    cout << endl;
}

// Q5
void question5() {
    int largest;
    int secondLargest = INT_MIN;
    largest = INT_MIN;
    while (true) {
        int num;
        cout << "Enter a positive number (0 to stop): ";
        cin >> num;
        if (num == 0) break;
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num < largest) {
            secondLargest = num;
        }
    }
    cout << "Largest number: " << largest << endl;
    cout << "Second largest number: " << secondLargest << endl;

}

// Q6
void question6() {
    double sum = 0;
    double term = 1;
    do {
        sum += term;
        term /= 4;
    } while (term >= 1.0 / 100);
    cout << "Sum of series: " << sum << endl;
}

// Q7 Patterns
void question7a() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 1 || j == 5) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
}

void question7b() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 6 - i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void question7c() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            if (j == 1) cout << i << " ";
            else cout << j * 2 << " ";
        }
        cout << endl;
    }
}

void question7d() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void question7e() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << "  ";
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) cout << "  ";
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << endl;
    }
}

void question8() {
    int studentCount;
    cout << "Enter the number of students: ";
    cin >> studentCount;
    double classTotal = 0;
    int gradeCounts[5] = {0};
    for (int i = 0; i < studentCount; i++) {
        string name;
        double grade;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter grade: ";
        cin >> grade;
        classTotal += grade;
        if (grade >= 90) gradeCounts[0]++;
        else if (grade >= 80) gradeCounts[1]++;
        else if (grade >= 70) gradeCounts[2]++;
        else if (grade >= 60) gradeCounts[3]++;
        else gradeCounts[4]++;
    }
    cout << "Class average: " << classTotal / studentCount << endl;
    cout << "Grade distribution:" << endl;
    cout << "A: " << gradeCounts[0] << endl;
    cout << "B: " << gradeCounts[1] << endl;
    cout << "C: " << gradeCounts[2] << endl;
    cout << "D: " << gradeCounts[3] << endl;
    cout << "F: " << gradeCounts[4] << endl;
}

int main() {
    // question1a();
    // question1b();
    // question2();
    // question3();
    // question4();
    // question5();
    // question6();
    // question7a();
    // question7b();
    // question7c();
    // question7d();
    // question7e();
    question8();
    return 0;
}
