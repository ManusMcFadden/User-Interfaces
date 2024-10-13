#include <iostream>
#include "rect.hpp"
using namespace std;

int main() {
    try {
        Rectangle a {4,9};
        cout << a.perimiter() << endl;
        Rectangle b {-1, 1, 5, 7};
        cout << b.perimiter() << endl;
    }
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }
}