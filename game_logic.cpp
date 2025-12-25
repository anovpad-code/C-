#include <iostream>
#include <string>
using namespace std;

int main() {
    string player = "Angelice";
    int score = 100;
    
    cout << "--- Mini Game Logic ---" << endl;
    cout << "Player Name: " << player << endl;
    cout << "Initial Score: " << score << endl;

    if (score >= 100) {
        cout << "Status: Level Up!" << endl;
    } else {
        cout << "Status: Keep Playing" << endl;
    }

    return 0;
}
