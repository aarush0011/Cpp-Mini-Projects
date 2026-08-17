#include <iostream>
using namespace std;

char userChoice(){

    char player;
    cout<<"Rock-Paper-Scissors Game\n";
    do{
        cout<<"Choose one: \n";
        cout<<"'r' - Rock\n'p' - Paper\n's' - Scissors\n";
        cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}

char compChoice(){
    return 0;
}

void showChoice(char choice){

    switch(choice){
        case 'r':
        cout<<"Rock\n";
        break;

        case 'p':
        cout<<"Paper\n";
        break;

        case 's':
        cout<<"Scissor\n";
        break;
    }
}

void chooseWinner(char player, char comp){}

int main() {

    char player, comp;

    player = userChoice();
    cout<<"Your choice: ";
    showChoice(player);

    return 0;
}