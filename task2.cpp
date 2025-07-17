#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    int randomNumber, userGuess;
    int attempts = 0;

    // Initialize random seed
    srand(time(0));
    
    // Generate random number between 1 and 100
    randomNumber = rand() % 100 + 1;

    cout << "Guess the Number Game!\n";
    cout << "------------------------\n";
    cout << "I'm thinking of a number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > randomNumber) {
            cout << "Too high! Try again.\n";
        }
        else if (userGuess < randomNumber) {
            cout << "Too low! Try again.\n";
        }
        else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }

    } while (userGuess != randomNumber);

    return 0;
}
