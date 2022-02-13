#include<iostream>
using namespace std;

void applyTax(int &income) {
    income = income - income * 0.1;
}

int main() {
    int income;
    cin >> income;

    applyTax(income);
    cout << income << endl;
}
