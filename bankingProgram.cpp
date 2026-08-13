#include <iostream>
using namespace std;

void deposit_money() {
    
}

void withdraw_money(double balance) {

}

void show_balance(double balance) {

}

int main() {

    int menu;
    int account;
    double balance = 0;

    cout<<"Welcome to the VS Bank\n";
    cout<<"What do you want to do: \n";
    cout<<"1. Deposit\n2. Withdraw\n3. Check Balance\n4.Exit";
    cout<<"Enter 1/2/3: ";
    cin >> menu;


    switch(menu){
        case 1:
        deposit_money();
        break;

        case 2:
        withdraw_money(balance);
        break;

        case 3:
        show_balance(balance);
        break;

        case 4:
        cout<<"Thank you, Visit the VS Bank again";

        default:
        cout<<"Enter only 1/2/3.";

    }

    return 0;
}