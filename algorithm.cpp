#include <iostream>
using namespace std;

void checkNumber(int x) {
    if (x % 2 == 0) {
        cout << x << " is even" << endl;
    } else {
        cout << x << " is odd" << endl;
    }
}

int main() {
    for (int i = 1; i <= 20; i++) {
        checkNumber(i);
    }
    return 0;
}
