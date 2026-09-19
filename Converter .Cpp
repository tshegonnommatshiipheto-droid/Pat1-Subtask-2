#include <iostream>
using namespace std;

int main() {
    int first, second, third;
    int increase;

    cout << "Enter first temperature reading: ";
    cin >> first;

    cout << "Enter second temperature reading (after 2 mins): ";
    cin >> second;

    increase = second - first;

    while (increase < 10 || increase > 50) {
        if (increase < 10) {
            cout << "Increase the Fryer heat" << endl;
        } else {
            cout << "Decrease the Fryer heat" << endl;
        }
        cout << "Re-enter second reading: ";
        cin >> second;
        increase = second - first;
    }

    cout << "Correct increase: " << increase << endl;
    cout << "Enter third temperature reading (after 5 mins): ";
    cin >> third;

    if (third >= 150 && third <= 190) {
        cout << "You may start frying the Magwinyas" << endl;
    } else {
        cout << "Oil not ready. Keep monitoring..." << endl;
    }

    return 0;
}
