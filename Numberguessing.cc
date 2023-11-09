#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;
    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have selected a random number between 1 and 100. Try to guess it." << std::endl;

    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < randomNumber) {
            std::cout << "Too low. Try again." << std::endl;
        } else if (guess > randomNumber) {
            std::cout << "Too high. Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number (" << randomNumber << ") in " << attempts << " attempts." << std::endl;
            break;
        }
    }

    return 0;
}