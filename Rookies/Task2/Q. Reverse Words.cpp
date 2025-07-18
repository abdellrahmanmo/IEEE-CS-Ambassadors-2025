#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string S;
    getline(cin, S); 

    int start = 0; 
    for (int i = 0; i <= S.length(); ++i) {

        if (S[i] == ' ' || i == S.length()) {

            reverse(S.begin() + start, S.begin() + i);
            start = i + 1; 
        }
    }

    cout << S << endl; 
    return 0;
}