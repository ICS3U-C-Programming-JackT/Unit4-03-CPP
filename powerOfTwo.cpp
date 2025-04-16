// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: April 10, 2025
// Power of two program in python

#include <iostream>
#include <string>
#include <cmath>

int main() {
    
    // Create variables for product, counter and user number
    std::string userNumString = "";
    std::cout << "Enter an integer above or equal to 0: ";
    std::cin >> userNumString;

    int userNumInt;

    try {
        // Convert user number to string
        userNumInt = std::stoi(userNumString);

        if (userNumInt < 0) {
            
            // Correct users mistake
            std::cout
            << "User number must be an integer greater than or equal to zero. You entered: "
            << userNumString;
        } else {
            // Loop through numbers 0 to user number
            int i = 0;
            for (i = 0; i < userNumInt + 1; i++) {
                std::cout << std::to_string(i) << "^2 = "
                << std::to_string(pow(i, 2)) <<"\n";

                if (i >= 100) {
                    break;
                }
            }
            std::cout << "Thanks for playing";
        }
    } catch (std::invalid_argument) {

        // Correct users mistake
        std::cout
        << "User number must be an integer greater than or equal to zero. You entered: " 
        << userNumString;
    }
}
