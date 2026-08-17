#include <iostream>
using namespace std;

char userChoice(){

    char player;
    cout<<"Rock-Paper-Scissors Game\n";
    do{
        cout<<"Choose one: ";
        cout<<"'r' - Rock\n'p' - Paper\n's' - Scissors: ";
        cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}

char compChoice(){
    return 0;
}

void showChoice(char choice){}

void chooseWinner(char player, char comp){}

int main() {

    char player, comp;

    player = userChoice();

    return 0;
}