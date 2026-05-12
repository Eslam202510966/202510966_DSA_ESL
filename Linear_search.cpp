#include <iostream>
#include <string>

using namespace std;

int main() {
    long long KeyNumber = 781465415;
    long long phoneNumbers[3];
    int i = 0;

    do {
        cout << "Enter your phone Number: ";
        cin >> phoneNumbers[i];
        i = i + 1;
    } while (i < 3);

    // linear search
    for (int j = 0; j < 3; j++) {
        if (phoneNumbers[j] == KeyNumber) {
            cout << "Ester number is found" << endl;
            break;
        }
    }

    return 0;
}
