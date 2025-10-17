#include <iostream>
#include <string>
using namespace std;
struct SalesRecord {
    string month;
    float amount;
};
int main() {
    SalesRecord records[12];
    cout << "Enter sales data for all 12 months:\n";
    for (int i = 0; i < 12; i++) {
        cout << "Month " << i + 1 << ":\n";
        cout << "Enter month name: ";
        cin >> records[i].month;
        cout << "Enter sales amount: ";
        cin >> records[i].amount;
    }
    string maxMonth, minMonth;
    float maxAmount = records[0].amount, minAmount = records[0].amount;
    for (int i = 1; i < 12; i++) {
        if (records[i].amount > maxAmount) {
            maxAmount = records[i].amount;
            maxMonth = records[i].month;
        }
        if (records[i].amount < minAmount) {
            minAmount = records[i].amount;
            minMonth = records[i].month;
        }
    }
    cout << "\nMonth with maximum sales: " << maxMonth << " ($" << maxAmount << ")\n";
    cout << "Month with minimum sales: " << minMonth << " ($" << minAmount << ")\n";
    return 0;
}
