#include <iostream>
#include <ctime>
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

    char comp;
    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num) {
        case 1:
        return 'r';

        case 2:
        return 'p';

        case 3:
        return 's';
    }

    return comp;
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

void chooseWinner(char player, char comp){
    if(comp == 'r' && player == 's'){
        cout<<"You LOSE!";
    }
    else if(comp == 'r' && player == 'p'){
        cout<<"You WIN!";
    }
    else{
        cout<<"Its a TIE!";
    }

    if(comp == 'p' && player == 'r'){
        cout<<"Your LOSE!";
    }
    else if(comp == 'p' && player == 's'){
        cout<<"You WIN!";
    }
    else{
        cout<<"Its a TIE!";
    }

    if(comp == 's' && player == 'p'){
        cout<<"You LOSE!";
    }
    else if(comp == 's' && player == 'r'){
        cout<<"You WIN!";
    }
    else{
        cout<<"Its a TIE!";
    }
}

int main() {

    char player, comp;

    player = userChoice();
    cout<<"Your choice: ";
    showChoice(player);

    comp = compChoice();
    cout<<"Computer's choice: ";
    showChoice(comp);

    

    return 0;
}