#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Variable to store the chosen number
    int chosenNumber = 7;

    // Variable for user's guess
    int userGuess = 0;

    // Array (list) to store all guesses
    vector<int> guesses;

    // While loop continues until correct guess
    while (userGuess != chosenNumber) {

        // Ask user to enter a number
        cout << "Enter your guess: ";
        cin >> userGuess;

        // Save the guess into the list
        guesses.push_back(userGuess);

        // Compare the guess with the chosen number
        if (userGuess > chosenNumber) {
            cout << "Too high" << endl;
        }
        else if (userGuess < chosenNumber) {
            cout << "Too low" << endl;
        }
        else {
            cout << "Correct" << endl;
        }
    }

    // Display all guesses entered
    cout << "\nAll guesses entered:" << endl;

    for (int i = 0; i < guesses.size(); i++) {
        cout << guesses[i] << endl;
    }

    return 0;
}