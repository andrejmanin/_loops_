#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");

    int lower, upper, number;

    cout << "������ ����� ����: ";
    cin >> lower;
    cout << "������ ������ ����: ";
    cin >> upper;

    do {
        cout << "������ ����� � ������� [" << lower << ", " << upper << "]: ";
        cin >> number;
        if (number < lower || number > upper) {
            cout << "����� �� ������� � �������. ��������� �� ���.\n";
        }
    } while (number < lower || number > upper);

    cout << "�� ����� �����: " << number << ", ��� ����������� � �������!\n";

    return 0;
}
