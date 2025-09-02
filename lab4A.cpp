// COMSC-210 | Lab 4A | Max Kechely
// IDE used: VSCode 

#include <iostream>
#include <string>
#include <vector>
#include <random>
using namespace std;

struct Color{
    int red;
    int green;
    int blue;
};


int main() {

    vector<Color> colors;
    srand(time(0));
    int n = 25 + rand() % 26; //adds a value to 25 between 0 and 25
    for (int i = 0; i < n; i++) {
        Color c;
        c.red = rand() % 256;   // Random value between 0 and 255
        c.green = rand() % 256; // Random value between 0 and 255
        c.blue = rand() % 256;  // Random value between 0 and 255
        colors.push_back(c);
    }
    cout << "coolor #    R    G   B" << endl;
    for (int i = 0; i < colors.size(); i++) {
        cout << i + 1 << ":     " 
             << colors[i].red << "   " 
             << colors[i].green << "    " 
             << colors[i].blue << endl;
    }

    

    return 0;
}