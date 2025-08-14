#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int count[200001] = {0};  

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            count[x]++;
        }

        int found = -1;
        for (int i = 1; i <= n; i++) {
            if (count[i] >= 3) {
                found = i;
                break;  
            }
        }

        cout << found << endl;
    }

    return 0;
}