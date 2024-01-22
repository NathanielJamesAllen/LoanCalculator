#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double calc_pay(double p, double i, int n);
double r, P;

int main()
{
    double A;
    int n;

    cout << "Enter the loan amount           : " << endl;
    cin >> P;
    cout << "Enter the annual percentage rate: " << endl;
    cin >> r;
    cout << "Enter the number of payments    : " << endl;
    cin >> n;

    r = r / 100;
    r = r / 12;
    A = calc_pay(P, r, n);

    cout << "The payment amount per period is : $" << fixed << showpoint << setprecision(2) << A << endl;
}
double calc_pay(double p, double i, int n) {
    double pmt;

    pmt = P * r * (pow(1 + r, n));
    pmt = pmt / (pow(1 + r, n) - 1);
    return(pmt);
}

