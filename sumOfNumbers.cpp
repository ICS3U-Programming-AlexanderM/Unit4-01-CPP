// Copyright (c) 2022 Alexander Matheson All rights reserved.

// Created by: Alexander Matheson
// Created on: Jan 5, 2022
// This program asks the user for a positive integer. It
// then calculates the sum of the numbers from 0 up to
// that integer.
#include <iostream>

int main() {
    // declare the loop, user number and sum vars
    int loop = 0;
    int sum = 0;
    std::string numberString;
    int userNumber;

    // get the user number as a string
    std::cout << "Enter your number: ";
    std::getline(std::cin, numberString);
    std::cout << std::endl;

    // error checking
    try {
        userNumber = std::stoi(numberString);
    } catch (std::invalid_argument) {
        std::cout << "Invalid input, must be an integer";
        return 0;
    }

    // check if number is equal to or greater than 0
    if (userNumber < 0) {
        std::cout << "Number must be equal to or greater than 0";
        return 0;
    }

    // calculate the sum of all numbers from 0 to user number
    while (loop <= userNumber) {
      sum = sum + loop;
      std::cout << "Tracking " << loop << " times through the loop.\n";
      loop = loop + 1;
    }

    // display the sum to the user
    std::cout << "\nThe sum of the numbers from 0 to " << userNumber
    << " is " << sum << std::endl;
}
