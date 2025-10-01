#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()

using namespace std;

int main() {
    // Seed random number generator
    srand(static_cast<unsigned int>(time(0)));

    int numberToGuess = rand() % 100 + 1; // Random number between 1 and 100
    int userGuess = 0;
    int attempts = 0;

    cout << "🎯 Welcome to the Number Guessing Game! 🎯\n";
    cout << "I have chosen a number between 1 and 100.\n";
    cout << "Try to guess it!\n\n";

    // Game loop
    while (userGuess != numberToGuess) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > numberToGuess) {
            cout << "Too high! Try again.\n";
        } else if (userGuess < numberToGuess) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "🎉 Congratulations! You guessed the number in " 
                 << attempts << " attempts.\n";
        }
    }

    return 0;
}
