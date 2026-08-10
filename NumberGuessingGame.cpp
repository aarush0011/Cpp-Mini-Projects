#include <iostream>
#include <ctime>
using namespace std;

int main() {

    int num, guess, tries;

    srand(time(NULL));
    num = rand() % 100 + 1;

    cout<<"Number Guessing Game\n";

    do{
        cout<<"Enter a guess between 1-100: ";
        cin>>guess;
        tries++;

        if(guess > num){
            cout<<"Guess Lower\n";
        }
        else if(guess < num){
            cout<<"Guess higher\n";
        }
        else{
            cout<<"You guessed it!";
            cout<<"Number of tries: "<<tries<<'\n';
        }
    }while(guess != num);


    return 0;
}