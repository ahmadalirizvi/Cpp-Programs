#include <iostream>
#include <cstring>
using namespace std;

class BankAccount {
    private:
        char* accountHolder;
        int balance;
    
    public:
        BankAccount(const char* name, int bal) {
            accountHolder = new char[strlen(name) + 1];
            strcpy(accountHolder, name);
            balance = bal;
        }
    
        BankAccount(const BankAccount& other) {
            accountHolder = new char[strlen(other.accountHolder) + 1];
            strcpy(accountHolder, other.accountHolder);
            balance = other.balance;
        }
    
        ~BankAccount() {
            delete[] accountHolder;
        }
    
        void setAccountHolder(const char* name) {
            delete[] accountHolder;
            accountHolder = new char[strlen(name) + 1];
            strcpy(accountHolder, name);
        }
    
        void displayAccount() {
            cout << "Name: " << accountHolder << ", Balance: " << balance << endl;
        }
    };
    

    int main() {
        BankAccount acc1("Ahmad Ali", 50000);
        BankAccount acc2 = acc1;
    
        acc1.setAccountHolder("Ahmad ");
    
        cout << "Account 1: "; acc1.displayAccount();
        cout << "Account 2: "; acc2.displayAccount();
    
        return 0;
    }
    