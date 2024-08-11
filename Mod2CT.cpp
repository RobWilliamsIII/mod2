/*
 * Mod2CT.cpp
 *
 *  Created on: Jul 23, 2024
 *      Author: robwilliams
 */
#include <iostream>
#include <string>

int main() {
    std::string name1, name2, name3, conc_name;

    // Loop to take input three times
    std::cout << "Make  Band Name \n";

    for (int i = 1; i <= 3; ++i) {
        std::cout << "Band Name " << i << ":\n";

        // Take first string input
        std::cout << "Enter the first adjective: ";
        std::getline(std::cin, name1);

        // Take second string input
        std::cout << "Enter the Fruit name(plural): ";
        std::getline(std::cin, name2);

        // Concatenate the strings
        conc_name = name1 + name2;

        if (!conc_name.empty()) {
                    conc_name[0] = std::toupper(conc_name[0]);
                }

        // Display the result
        std::cout << "Band Name: The " << conc_name << "\n\n";
    }

    return 0;
}
