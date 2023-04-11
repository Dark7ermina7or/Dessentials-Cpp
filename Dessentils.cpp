#include "Dessentils.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <string>
#include <sstream>

using namespace std;

/*
 * InputValidator - START
 * */

int InputValidator::validateInt() {
    int input;
    cin >> input;

    while (cin.fail() || cin.peek() != '\n') {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter an integer: ";
        cin >> input;
    }
    return input;
}

double InputValidator::validateDouble() {
    double input;
    cin >> input;

    while (cin.fail() || cin.peek() != '\n') {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a double: ";
        cin >> input;
    }
    return input;
}

string InputValidator::validateString() {
    string input;
    getline(cin, input);

    while (input.empty()) {
        cout << "Invalid input. Please enter a non-empty string: ";
        getline(cin, input);
    }
    return input;
}

bool InputValidator::validateBool() {
    string input;
    getline(cin, input);

    for (char & i : input) {
        i = tolower(i);
    }

    while (input != "true" && input != "false" && input != "f" && input != "t" && input != "yes" && input != "no" && input != "y" && input != "n" && input != "1" && input != "0") {
        cout << "Invalid input. Please enter 'true' or 'false': ";

        getline(cin, input);

        for (char & i : input) {
            i = tolower(i);
        }
    }

    if (input == "true" || input == "t" || input == "yes" || input == "y" || input == "1") return true;
    else return false;
}

char InputValidator::validateChar() {
    char input;
    cin >> input;

    while (cin.fail() || cin.peek() != '\n') {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a single character: ";
        cin >> input;
    }
    return input;
}

int InputValidator::getInt() {cout << "Enter an integer: "; return validateInt();}
double InputValidator::getDouble() {cout << "Enter a double: "; return validateDouble();}
string InputValidator::getString() {cout << "Enter a string: "; return validateString();}
bool InputValidator::getBool() {cout << "Enter a boolean (true or false): "; return validateBool();}
char InputValidator::getChar() {cout << "Enter a character: "; return validateChar();}

/*
 * InputValidator - END
 *
 * Statistics - START
 * */


Statistics::Statistics(const vector<int>& values) : values_num(values) {}
Statistics::Statistics(const vector<std::string>& values) : values_str(values) {}

int Statistics::sum() const {
    if (values_num.empty()){ return NULL;}

    int sum = 0;
    for (int value : values_num) {
        sum += value;
    }
    return sum;
}

double Statistics::average() const {
    if (values_num.empty()){ return NULL;}

    return static_cast<double>(sum()) / values_num.size();
}

int Statistics::min() const {
    if (values_num.empty()){ return NULL;}

    return *min_element(values_num.begin(), values_num.end());
}

int Statistics::max() const {
    if (values_num.empty()){ return NULL;}

    return *max_element(values_num.begin(), values_num.end());
}

double Statistics::median() const {
    if (values_num.empty()){ return NULL;}

    vector<int> sorted = values_num;
    sort(sorted.begin(), sorted.end());
    int n = sorted.size();
    if (n % 2 == 0) {
        return static_cast<double>(sorted[n / 2 - 1] + sorted[n / 2]) / 2.0;
    } else {
        return sorted[n / 2];
    }
}

string Statistics::shortest() const {
    if (values_str.empty()){ return NULL;}

    string shortest = values_str[0];
    for (const string& value : values_str) {
        if (value.length() < shortest.length()) {
            shortest = value;
        }
    }
    return shortest;
}

string Statistics::longest() const {
    if (values_str.empty()){ return NULL;}

    string longest = values_str[0];
    for (const string& value : values_str) {
        if (value.length() > longest.length()) {
            longest = value;
        }
    }
    return longest;
}

/*
 * Statistics - END
 * */