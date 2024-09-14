#include <iostream>
#include <ctime>
#include <cstdlib>

    using namespace std;
        int main() {
            srand(time(0));
                int userChoice, computerChoice;
                int userWins = 0, computerWins = 0;

            while(true){
                cout << "Enter your choice (1-3) " << endl;
                cout << " 1. Rock " << endl;
                cout << " 2. Paper " << endl;
                cout << " 3.  Scissors " << endl;
                cin >> userChoice;

                // computers turn.
                computerChoice = rand()% 3+1;

                // display choices.
                cout << "Your chose: ";
                switch(userChoice) {
                    case 1: cout << "Rock";
                    break;
                    case 2: cout << "Paper";
                    break;
                    case 3: cout << " Scissors";
                    break;

                }
                 cout << "Computer chose: ";
                switch(computerChoice) {
                    case 1: cout << "Rock";
                    break;
                    case 2: cout << "Paper";
                    break;
                    case 3: cout << " Scissors";
                    break;
            }
            cout << endl;

                // determine the winner.
                if (userChoice == computerChoice) {
                    cout << "Its a tie" << endl;
                }
                else if((userChoice == 1 && computerChoice == 3) ||
                    (userChoice == 2 && computerChoice == 1) ||
                (userChoice == 3 && computerChoice == 2)) {
                    cout << "You win!" << endl;
                    userWins++;

                }
                else {
                    cout << "Computer wins" << endl;
                    computerWins++;
                }
                // Display scores
                cout << "Score - You: " << userWins << ", Computer: " << computerWins << endl;

                // Play Again
                char playAgian;
                cout << "Play Again? (y/n):";
                cin >> playAgian;
                if(playAgian != 'y') {
                    break;
                }
        }
         return 0;
        }
