#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int X;
    cin >> X;

    for (int i = 0; i < N; i++) {
        if (A[i] == X) {
            cout << i << endl;
            return 0;  
        }
    }

    cout << -1 << endl; 
    return 0;
}
