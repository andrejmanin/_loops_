#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");

    int lower, upper, number;

    cout << "¬вед≥ть нижню межу: ";
    cin >> lower;
    cout << "¬вед≥ть верхню межу: ";
    cin >> upper;

    do {
        cout << "¬вед≥ть число в д≥апазон≥ [" << lower << ", " << upper << "]: ";
        cin >> number;
        if (number < lower || number > upper) {
            cout << "„исло не входить у д≥апазон. —пробуйте ще раз.\n";
        }
    } while (number < lower || number > upper);

    cout << "¬и ввели число: " << number << ", €ке знаходитьс€ в д≥апазон≥!\n";

    return 0;
}
