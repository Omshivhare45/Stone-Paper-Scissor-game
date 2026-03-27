#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(0));

    cout << " === Rock Paper Scissors ===\n\n";
    cout << "Select one choice \n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissor\n";
    cout << "Enter your choice \n";

    int choice ;
    cin >> choice;
    if( choice < 0 || choice > 3){
        cout << "Invalid choice";
        return 0;
    }

    int compChoice = rand() % 3 + 1;

    string choices[] = { "Rock", "Paper", "Scissors"};

    cout << "You chose: " << choices[choice - 1] << endl;
    cout << "Opponent choice: " << choices[compChoice - 1] << endl;

    if(choice == compChoice){
        cout << "It's a draw!\n";
    }
    else if((choice == 1 && compChoice == 3) || (choice == 2 && compChoice == 1) || (choice == 3 && compChoice == 2)){
        cout << "You Win!\n";
    }else {
        cout << "Opponent win!";
    }
    return 0;
}