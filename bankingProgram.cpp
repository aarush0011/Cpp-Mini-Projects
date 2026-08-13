#include <iostream>
using namespace std;

double deposit_money() {
    return 0;
}

double withdraw_money(double balance) {
    return 0;
}

void show_balance(double balance) {
    
}

int main() {

    int menu;
    int account;
    double balance = 0;


    do{
        cout<<"Welcome to the VS Bank\n";
        cout<<"What do you want to do: \n";
        cout<<"1. Deposit\n2. Withdraw\n3. Check Balance\n4.Exit";
        cout<<"Enter 1/2/3/4: ";
        cin >> menu;


        switch(menu){
            case 1:
            balance += deposit_money();
            break;

            case 2:
            balance -= withdraw_money(balance);
            break;

            case 3:
            show_balance(balance);
            break;

            case 4:
            cout<<"Thank you for visiting, Visit the VS Bank again";
            break;

            default:
            cout<<"Enter only 1/2/3/4";
        }
    }while(menu != 4);

    return 0;
}