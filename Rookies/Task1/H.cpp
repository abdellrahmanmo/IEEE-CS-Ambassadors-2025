#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[1000];   

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }


    for (int i = 0; i < N - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < N; j++) {
            if (A[j] < A[minIndex]) {
                minIndex = j;
            }
        }

        int temp = A[i];
        A[i] = A[minIndex];
        A[minIndex] = temp;
    }


    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}