#include <iostream>
#include <string>
using namespace std;

struct Product {
    string name;
    double price;
    int quantity;
};

void showProducts(Product products[], int size) {
    cout << "Product list:\n";
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ". " << products[i].name << " - " << products[i].price << " UAH (Quantity: " << products[i].quantity << ")\n";
    }
}

int main() {
    Product products[4] = {
        {"Christmas Balls", 50, 10},
        {"Garlands", 120, 5},
        {"Snowflakes", 30, 15},
        {"Artificial Christmas Tree", 1000, 2}
    };

    double totalEarnings = 0;
    char choice;

    do {
        double total = 0;
        cout << "New client. Select products to purchase.\n";

        while (true) {
            showProducts(products, 4);
            cout << "Select product number (0 to finish): ";
            int productIndex;
            cin >> productIndex;

            if (productIndex == 0) break;

            if (productIndex < 1 || productIndex > 4) {
                cout << "Invalid number. Please try again.\n";
                continue;
            }

            cout << "Enter quantity: ";
            int quantity;
            cin >> quantity;

            if (quantity > products[productIndex - 1].quantity) {
                cout << "Not enough stock. Available: " << products[productIndex - 1].quantity << "\n";
            }
            else {
                products[productIndex - 1].quantity -= quantity;
                total += quantity * products[productIndex - 1].price;
            }
        }

        cout << "Is there a discount? (y/n): ";
        char discount;
        cin >> discount;

        if (discount == 'y' || discount == 'Y') {
            total *= 0.9; // 10% discount
        }

        cout << "Total purchase amount: " << total << " UAH\n";
        totalEarnings += total;

        cout << "Serve the next client? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Total store earnings: " << totalEarnings << " UAH\n";
    return 0;
}
