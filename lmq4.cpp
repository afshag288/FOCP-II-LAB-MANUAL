#include <iostream>
using namespace std;

int main() {
    int itemNo, quantity;
    float unitPrice, amount, discount, finalBill;

    cout << "Enter Item Number: ";
    cin >> itemNo;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Unit Price: ";
    cin >> unitPrice;

    amount = quantity * unitPrice;
    discount = amount * 0.20;
    finalBill = amount - discount;

    cout << "Total Amount = " << amount << endl;
    cout << "Discount (20%) = " << discount << endl;
    cout << "Final Bill Amount = " << finalBill << endl;

    return 0;
}