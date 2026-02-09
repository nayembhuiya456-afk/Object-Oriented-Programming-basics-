#include <iostream>
using namespace std;

int main() {
    int scores[8];
    int count = 0;
    int i;

    for (i = 0; i < 8; i++) {
        cout << "Enter score of student " << i + 1 << ": ";
        cin >> scores[i];
    }

    for (i = 0; i < 8; i++) {
        if (scores[i] > 50) {
            count++;
        }
    }

    cout << "\nNumber of students who passed: " << count << endl;

    cout << "\nScores in reverse order:" << endl;
    for (i = 7; i >= 0; i--) {
        cout << scores[i] << endl;
    }

    return 0;
}
