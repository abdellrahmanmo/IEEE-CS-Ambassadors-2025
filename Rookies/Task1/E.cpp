#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int minNumber = A[0];  
    int minIndex = 0;    

    for (int i = 1; i < N; i++) {
        if (A[i] < minNumber) {
            minNumber = A[i];  
            minIndex = i;     
        }
    }

    cout << minNumber << " " << minIndex + 1 << endl;

    return 0;
}