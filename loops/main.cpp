#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");

    int lower, upper, number;

    cout << "Введіть нижню межу: ";
    cin >> lower;
    cout << "Введіть верхню межу: ";
    cin >> upper;


    do {
        cout << "Введіть число в діапазоні [" << lower << ", " << upper << "]: ";
        cin >> number;
        if (number < lower || number > upper) {
            cout << "Число не входить у діапазон. Спробуйте ще раз.\n";
        }
    } while (number < lower || number > upper);

    cout << "Ви ввели число: " << number << ", яке знаходиться в діапазоні!\n";

    return 0;
}
