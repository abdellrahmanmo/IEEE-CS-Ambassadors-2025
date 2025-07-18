#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    string target = "hello";
    int j = 0;

    for (int i = 0; i < S.length(); ++i) {
        if (S[i] == target[j]) {
            ++j;
            if (j == target.length()) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}