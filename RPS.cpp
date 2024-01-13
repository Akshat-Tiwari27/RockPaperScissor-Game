#include <iostream>
const char ROCK = 'r';
const char PAPER = 'p';
const char SCISSORS = 's';

using namespace std;
char getComputerOption() {
    srand(time(0));
    int num = rand() % 3 + 1;
    if(num==1) return 'r';
    if(num==2) return 'p';
    if(num==3) return 's';
}

char getUserOption() {
    cout<<"Welcome to Akshat,s game of Rock Paper Scissor
    char c;
    cout << "Rock, Paper and Scissors Game!" << endl;
    cout << "Choose one of the following options"  << endl;
    cout << "-----------------------------------"  << endl;
    cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl;
    cin >> c;
    while (c!='r' && c!='p' && c!='s' )
    {
        cout << "Please enter one of the following options only. " << endl;
        cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl;
        cin >> c;
    }
    return c;
}
void showSelectedOption(char option) {
    if (option == 'r') cout << "Rock" << endl;
    if (option == 'p') cout << "Paper" << endl;
    if (option == 's') cout << "Scissors" << endl;
}

void chooseWinner(char uChoice, char cChoice) {
    if (uChoice == ROCK && cChoice == PAPER) {
        cout << "Akshat Wins! Paper wraps Rock."<< endl;
    }
    else if (uChoice == PAPER && cChoice == SCISSORS) {
        cout << "Akshat Wins! Scissors cut Paper."<< endl;
        
    }
    else if (uChoice == SCISSORS && cChoice == ROCK) {
        cout << "Akshat Wins! Rock smashes Scissors."<< endl;
        
    }
    else if (uChoice == ROCK && cChoice == SCISSORS) {
        cout << "You Win! Paper wraps Rock."<< endl;
        
    }
    else if (uChoice == PAPER && cChoice == ROCK) {
        cout << "You Win! Paper wraps Rock."<< endl;
        
    }
    else if (uChoice == SCISSORS && cChoice == PAPER) {
        cout << "You Win! Scissors cut Paper."<< endl;
    }
    else{
        cout << "Tie. Play again win the Game." << endl;
    }
}
int main() {
    char uChoice;
    char cChoice;
    
    uChoice = getUserOption();
    cout << "Your choice is: "<< endl;
    showSelectedOption(uChoice);
    
    cout << "Akshat's choice is: "<< endl;
    cChoice = getComputerOption();
    showSelectedOption(cChoice);
    chooseWinner(uChoice, cChoice);
cout<<"Thanks for visiting my game";
return 0;
}
