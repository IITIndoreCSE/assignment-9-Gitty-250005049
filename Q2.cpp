#include <iostream>
using namespace std;
struct Color {
    int red;
    int green;
    int blue;
};
int main() {
    Color colors[5] = {
        {120, 150, 200}, // First color
        {50, 100, 150},  // Second color
        {200, 250, 100}, // Third color
        {75, 125, 175},  // Fourth color
        {10, 20, 30}     // Fifth color
    };
    for (int i = 0; i < 3; i++) {
        colors[i].red = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue = 255 - colors[i].blue;
    }
    cout << "Updated RGB values for all 5 colors:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Color " << i + 1 << ": ";
        cout << "Red = " << colors[i].red << ", ";
        cout << "Green = " << colors[i].green << ", ";
        cout << "Blue = " << colors[i].blue << endl;
    }
    return 0;
}
