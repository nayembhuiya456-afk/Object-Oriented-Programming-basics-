#include <iostream>
using namespace std;

double convert(double usd )
{
    double rate = 110.50;
    return usd * rate;
}

int main()
{
    double dollar;
    double taka;

    cout << "Enter amount in USD: ";
    cin >> dollar;

    taka = convert(dollar);

    cout << "In BDT: " << taka << endl;

    return 0;
}
