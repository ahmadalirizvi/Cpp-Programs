#include<iostream>
using namespace std;

class Darr{
private:
    int *arr;
    int size;
protected:
    void setSize(int s){
        size = s;
    }   
public:
    Darr(int s){
        arr = new int[s];
        setSize(s);
    }
    Darr(const Darr &d){
        size = d.size;
        arr = new int[size];
        for(int i = 0; i < size; i++){
            arr[i] = d.arr[i];
        }
    }
    void setArr(int *a){
        for(int i = 0; i < size; i++){
            arr[i] = a[i];
        }
    }
    void printArr(){
        for(int i = 0; i < size; i++){
            cout << arr[i] << endl;
        }
        cout << endl;
    }
    ~Darr(){
        delete[] arr;
        cout << "Destructor called" << endl;
    }

};

int main(){
    int a[] = {1, 2, 3, 4, 5};
    Darr d(5);
    d.setArr(a);
    d.printArr();
    Darr d2 = d; 
    d2.printArr();
    return 0;
}