/*
 * The following code is incomplete. Fill in the blanks so the code is 
 * syntactically valid and the program prints the message 
 *
 * "Congratulations, you understand if statements!"
 *
 * all on one line.
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main() {
    bool congratsInOrder = true;

    __ congratsInOrder {
        cout << "Congratulations";
    }

    bool sentenceDone = false;

    __ sentenceDone {
        cout << "!" << endl;
    } ____ {
        cout << ", you understand ";

        std::string statementType = "if";

        __ statementType == "switch" {
            cout << "switch statements!" << endl;
        } _______ statementType == "if" {
            cout << "if statements!" << endl;
        } ____ {
            cout << "nothing!" << endl;
        }
    }
}
