#include <iostream>
using namespace std;

int main() {

    string que[] = {"What year was C++ was created?: ",
                    "Who invented C++?: ",
                    "What is the predecessor of C++?: ",
                    "Is the Earth flast?: "};
    string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                            {"A. Guido Van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zukerberg"},
                            {"A. C", "B. C+", "C. C--", "D. C#"},
                            {"A. Yes", "B. No", "C. Both A and B", "D. Depends on unknown reasons"}};
    
    char ans[] = {'C','B','A','B'};

    int size = sizeof(que)/sizeof(que[0]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        cout<<'\n';
        cout<<que[i]<<'\n';
        cout<<'\n';

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            cout<<options[i][j]<<'\n';
        }
        cin>>guess;
        guess = toupper(guess);

        if(guess == ans[i]){
            cout<<"CORRECT!!!\n";
            score++;
        }
        else{
            cout<<"WRONG!!!";
            cout<<"The correct answer is: "<<ans[i]<<'\n';
        }
    }
    cout<<'\n';
    cout<<"     Results     \n";
    cout<<'\n';
    cout<<"Correct Guesses: "<<score<<'\n';
    cout<<"Score: "<<(score/(double)size)*100<<"%";

    return 0;
}