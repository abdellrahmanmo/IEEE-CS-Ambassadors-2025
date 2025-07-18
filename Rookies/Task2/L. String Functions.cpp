#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, query;
    cin >> n >> query;
    
    string txt;
    cin >> txt;

    while (query--) {
        string op;
        cin >> op;

        if (op == "pop_back") {
            if (!txt.empty()) txt.pop_back();
        }
        else if (op == "front") {
            if (!txt.empty()) cout << txt.front() << endl;
        }
        else if (op == "back") {
            if (!txt.empty()) cout << txt.back() << endl;
        }
        else if (op == "sort") {
            int x, y;
            cin >> x >> y;
            if (x > y) swap(x, y);
            if (x >= 1 && y <= (int)txt.size()) {
                sort(txt.begin() + x - 1, txt.begin() + y);
            }
        }
        else if (op == "reverse") {
            int x, y;
            cin >> x >> y;
            if (x > y) swap(x, y);
            if (x >= 1 && y <= (int)txt.size()) {
                reverse(txt.begin() + x - 1, txt.begin() + y);
            }
        }
        else if (op == "print") {
            int pos;
            cin >> pos;
            if (pos >= 1 && pos <= (int)txt.size()) {
                cout << txt[pos - 1] << endl;
            }
        }
        else if (op == "substr") {
            int x, y;
            cin >> x >> y;
            if (x > y) swap(x, y);
            if (x >= 1 && y <= (int)txt.size()) {
                cout << txt.substr(x - 1, y - x + 1) << endl;
            }
        }
        else if (op == "push_back") {
            char v;
            cin >> v;
            txt.push_back(v);
        }
    }

    return 0;
}

