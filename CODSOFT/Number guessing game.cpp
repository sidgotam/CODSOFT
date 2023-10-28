#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
     srand(static_cast<unsigned int>( time(nullptr)));

    // Generate a random number between 1 and 100
    int secretNumber =  rand() % 100 + 1;

    int guess;
    int attempts = 0;

     cout << "Welcome to the Number Guessing Game!" <<  endl;
     cout << "I've selected a random number between 1 and 100. Try to guess it!" <<  endl;

    while (true) {
         cout << "Enter your guess: ";
         cin >> guess;

        attempts++;

        if (guess < secretNumber) {
             cout << "Too low! Try again." <<  endl;
        } else if (guess > secretNumber) {
             cout << "Too high! Try again." <<  endl;
        } else {
             cout << "Congratulations! You've guessed the correct number, which is " << secretNumber <<  endl;
             cout << "It took you " << attempts << " attempts." <<  endl;
            break;
        }
    }

    return 0;
}
