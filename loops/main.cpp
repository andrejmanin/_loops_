#include <iostream>
using namespace std;

void drawFigure(char type) {
    int size = 5;

    switch (type) {
    case 'a':
        for (int i = 0; i < size; i++) {
            for (int j = 0; j <= i; j++) cout << "*";
            cout << "\n";
        }
        break;

    case 'b':
        for (int i = size; i > 0; i--) {
            for (int j = 0; j < i; j++) cout << "*";
            cout << "\n";
        }
        break;

    case 'v':
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (j >= i) cout << "*";
                else cout << " ";
            }
            cout << "\n";
        }
        break;

    case 'g':
        for (int i = size - 1; i >= 0; i--) {
            for (int j = 0; j < size; j++) {
                if (j >= i) cout << "*";
                else cout << " ";
            }
            cout << "\n";
        }
        break;

    case 'd':
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == j || i + j == size - 1) cout << "*";
                else cout << " ";
            }
            cout << "\n";
        }
        break;

    default:
        cout << "Invalid choice!\n";
    }
}

int main() {
    char choice;
    do {
        cout << "Select a figure to display (a, b, v, g, d): ";
        char figureType;
        cin >> figureType;

        drawFigure(figureType);

        cout << "Do you want to select another figure? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
