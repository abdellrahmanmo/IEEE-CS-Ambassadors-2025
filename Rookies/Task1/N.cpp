#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    string S;
    cin >> S;

    bool isValid = true;

 
    if (S[A] != '-') {
        isValid = false;
    }

 
    for (int i = 0; i < S.length(); i++) {
        if (i != A && !isdigit(S[i])) {
            isValid = false;
        }
    }

 
    if (S.length() != A + B + 1) {
        isValid = false;
    }

    if (isValid) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}