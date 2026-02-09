#include <iostream>
using namespace std;

int main()
{
    int  prices[10];
    int  total = 0;
    int  highest;
    int i;

    for (i = 0; i < 10; i++)
    {
        cout << "Enter price of item " << i + 1 << ": ";
        cin >> prices[i];
    }

    highest = prices[0];

    for (i = 0; i < 10; i++)
    {
        total += prices[i];

        if (prices[i] > highest)
        {
            highest = prices[i];
        }
    }

    cout << "\nTotal cost of all items: " << total << endl;
    cout << "Most expensive item price: " << highest << endl;

    return 0;
}
