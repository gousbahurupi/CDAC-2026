#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool validate_password(string pwd) {
    if (pwd.length() < 8) return false;

    bool has_digit = false, has_lower = false, has_upper = false, has_special = false;

    for (char ch : pwd) {
        if (isdigit(ch)) has_digit = true;
        else if (islower(ch)) has_lower = true;
        else if (isupper(ch)) has_upper = true;
        else if (ispunct(ch)) has_special = true; 
    }

    return has_digit && has_lower && has_upper && has_special;
}

int main() {
    string password;
    cout << "Enter a password to validate: ";
    cin >> password;

    if (validate_password(password)) {
        cout << "Password is valid." << endl;
    } else {
        cout << "Password is invalid. It must be at least 8 characters long and include at least one digit, one lowercase letter, one uppercase letter, and one special character." << endl;
    }

    return 0;
}