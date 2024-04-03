#include <iostream>
#include "Account.h"
using namespace std;


int main(){

    Account account1{"Jane Green", 50};

    Account account2{"John Blue", 0};

    
    cout<<"account 1: "<< account1.getName()<<" balance is S/. "<<account1.getBalance()<<endl;
    cout<<"account 2: "<< account2.getName()<<" balance is S/. "<<account2.getBalance()<<endl;

    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount);

    cout << "\n\naccount1: " << account1.getName() << " balance is $"
    << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
    << account2.getBalance();

    cout << "\n\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount);

    cout << "\n\naccount1: " << account1.getName() << " balance is $"
    << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
    << account2.getBalance() << endl;

    //RETIRAR:

//RETIRAR:

    int withdrawal;
    cout << "\n\nEnter withdrawal amount for account1: -S/.";
    cin >> withdrawal;
    cout << "Withdraw " << withdrawal << " from account1 balance";
    int withdrawn = account1.withdraw(withdrawal);
        if (withdrawn > 0) {
            cout << "\n\nWithdrawn amount: -S/." << withdrawn;
            cout << "\nUpdated account1 balance: S/." << account1.getBalance();
        }


    return 0;
}