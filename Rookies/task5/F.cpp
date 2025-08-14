#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count = 0, power = 1;
        int temp = n;

        // عد الحدود
        while (temp) {
            if (temp % 10) count++;
            temp /= 10;
        }

        cout << count << endl;
        power = 1;
        while (n) {
            if (n % 10) cout << (n % 10) * power << " ";
            n /= 10;
            power *= 10;
        }
        cout << endl;
    }
    return 0;
}