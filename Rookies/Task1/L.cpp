#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int A[100]; 

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        for (int i = 0; i < N; i++) {
            int maxElement = A[i];
            for (int j = i; j < N; j++) {
                if (A[j] > maxElement) {
                    maxElement = A[j];
                }
                cout << maxElement << " ";
            }
        }
        cout << endl;
    }

    return 0;
}