#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string toTitleCase(const std::string& line) {
    string result;
    bool capitalizeNext = true;

    for (char ch : line) {
        if (isspace(ch)) {
            capitalizeNext = true;
            result += ch;
        } else if (capitalizeNext) {
            result += toupper(ch);
            capitalizeNext = false;
        } else {
            result += tolower(ch);
        }
    }

    return result;
}

int main() {
    string inputLine;
    cout << "Enter a line: ";
    getline(cin, inputLine);

    string titleCaseLine = toTitleCase(inputLine);
    cout << "Title Case: " << titleCaseLine << endl;

    return 0;
}