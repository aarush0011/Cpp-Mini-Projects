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

    switch(player){
        case 'r':
        if(comp == 'r'){
            cout<<"It's a TIE!\n";
        }
        else if(comp == 'p'){
            cout<<"You LOSE!\n";
        }
        else{
            cout<<"Your WIN!\n";
        }
        break;

        case 'p':
        if(comp == 'p'){
            cout<<"It's a TIE!\n";
        }
        else if(comp == 's'){
            cout<<"You LOSE!\n";
        }
        else{
            cout<<"Your WIN!\n";
        }
        break;

        case 's':
        if(comp == 's'){
            cout<<"It's a TIE!\n";
        }
        else if(comp == 'r'){
            cout<<"You LOSE!\n";
        }
        else{
            cout<<"Your WIN!\n";
        }
        break;
    }
}

int main() {

    char player, comp;
    char playAgain;

    do{
        player = userChoice();
        cout<<"Your choice: ";
        showChoice(player);

        comp = compChoice();
        cout<<"Computer's choice: ";
        showChoice(comp);

        chooseWinner(player, comp);

        cout<<"Do you want to play again? (y/n): ";
        cin>>playAgain;
    }while(playAgain == 'y' || playAgain == 'Y');

    cout<<"Thank You for playing!\n";

    return 0;
}