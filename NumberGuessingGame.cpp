#include <iostream>
#include <ctime>
using namespace std;

int main() {

    int num, guess, tries;

    srand(time(NULL));
    num = rand() % 100 + 1;

    cout<<"Number Guessing Game";

    return 0;
}