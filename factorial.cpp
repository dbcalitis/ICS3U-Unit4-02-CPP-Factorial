// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Sept 2021
// This program is a factorial program

#include <iostream>
#include <string>

int main() {
    // This function multiplies all numbers 1 to the given number (factorial)
    /* The list of factorial products starts with 1 because 0! = 1 */
    // If these variables down below are 0, the product will always be 0.
    int loopCounter = 1;
    int product = 1;
    int userInput;
    std::string userInputString;

    std::cout << "Enter a positive number: ";
    std::cin >> userInputString;

    try {
        userInput = std::stoi(userInputString)

        if (userInput < 0) {
            std::cout << "You did not enter a positive number." << std::endl;
        } else {
            do {
                product *= loopCounter;
                loopCounter += 1;
            } while (loopCounter <= userInput)
            std::cout << userInput << "! = " << product;
        }
    } catch(...) {
        std::cout << "Invalid Input."
    }

    std::cout << "\nDone." << std::endl;
}
