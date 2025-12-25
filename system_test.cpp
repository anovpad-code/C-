#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Fungsi untuk mengetes list
void testList() {
    vector<string> items = {"Apple", "Banana", "Cherry"};
    for(const string& item : items) {
        cout << "Testing item: " << item << endl;
    }
}

// Fungsi untuk simulasi loading
void showProgress() {
    for(int i = 0; i <= 100; i += 20) {
        cout << "System Loading: " << i << "%" << endl;
    }
}

int main() {
    cout << "--- C++ Global System Test ---" << endl;
    testList();
    showProgress();
    cout << "Test Complete. All systems green!" << endl;
    return 0;
}
