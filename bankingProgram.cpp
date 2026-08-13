#include <iostream>
#include <iomanip>
using namespace std;

double deposit_money() {
    double amount;
    cout<<"Enter amount to be deposited: $";
    cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        cout<<"Invalid amount\n";
        return 0;
    }
}

double withdraw_money(double balance) {
    double amount = 0;
    
    cout<<"How much money do want to withdraw: $";
    cin >> amount;

    if(amount > balance){
        cout<<"Insufficient funds\n";
        return 0;
    }

    return amount;
}

void show_balance(double balance) {
    cout<<"Your balance: "<<"$"<< setprecision(2) << fixed <<balance<<'\n';
}

int main() {

    double balance = 0;
    int menu = 0;


    do{ 
        cout<<"Welcome to the VS Bank\n";
        cout<< "---------------------------\n";
        cout<<"What do you want to do: \n";
        cout<<"1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
        cout<< "---------------------------\n";
        cout<<"Enter 1/2/3/4: ";
        cin >> menu;


        switch(menu){
            case 1:
            balance += deposit_money();
            show_balance(balance);
            break;

            case 2:
            balance -= withdraw_money(balance);
            show_balance(balance);
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