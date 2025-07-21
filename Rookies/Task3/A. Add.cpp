#include <iostream>

using namespace std;


int summation(int x, int y) {
    return x + y;
}

int main() {
    int x, y;
    cin >> x >> y; 
    cout << summation(x, y) << endl; 
    return 0;
}
