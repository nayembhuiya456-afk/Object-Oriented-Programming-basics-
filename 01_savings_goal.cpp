#include <iostream>
using namespace std;

int main()
{
    double g;
    double dS;
    double total = 0;
    int days = 0;

    cout << "Enter your savings goal: ";
    cin >> g;

    for (days = 1; total < g; days++) {
        cout << "Enter savings for day " << days << ": ";
        cin >> dS;

        total += dS;
    }

    cout << "Total amount saved: " << total << endl;
    cout << "Number of days it took: " << days - 1 << endl;

    return 0;
}

