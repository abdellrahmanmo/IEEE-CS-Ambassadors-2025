#include iostream
#include string
using namespace std;

int main() {
    int N;
    cin  N;

    string digits;
    cin  digits;

    int sum = 0;

    for (char ch  digits) {
        sum += (ch - '0'); 
    }

    cout  sum  endl;

    return 0;
}
