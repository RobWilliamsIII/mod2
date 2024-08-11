/*
 * Mod2CT.cpp
 *
 *  Created on: Jul 23, 2024
 *      Author: robwilliams
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variables to store the input strings
    string input1;
    string input2;
    string combinedInput;



    // Loop to take input and display concatenated strings three times
    for (int i = 1; i <= 3; ++i) {
    	cout << "Name your Band: ";
        // Take the first string input from the user
        cout << "Adjective: ";
        getline(cin, input1);
        input1[0] = toupper(input1[0]);

        // Take the second string input from the user
        cout << "Favorite fruit ( plural ): ";
        getline(cin, input2);
        input2[0] = toupper(input2[0]);

        // Concatenate the two strings
        combinedInput = input1 + input2;

        // Print the concatenated string
        cout << "Band Name: The " << combinedInput << endl;


    return 0;
}
}
s
