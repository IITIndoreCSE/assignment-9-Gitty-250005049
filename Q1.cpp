#include <iostream>
using namespace std;
struct Item {
    int id;
    float cost;
};
int main() {
    Item items[6] = {
        {1, 45.50},  // First item
        {2, 65.75},  // Second item
        {3, 25.30},  // Third item
        {4, 120.00}, // Fourth item
        {5, 30.40},  // Fifth item (not initialized)
        {6, 80.60}   // Sixth item (not initialized)
    };
    cout << "Items with cost greater than 50.00 are:\n";
    for (int i = 0; i < 6; i++) {
        if (items[i].cost > 50.00) {
            cout << "Item ID: " << items[i].id << ", Cost: " << items[i].cost << endl;
        }
    }
    return 0;
}
