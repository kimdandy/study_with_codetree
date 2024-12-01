#include <iostream>
using namespace std;

int main() {
    int f, x, y;
    char h1, h2;
    // 1.
    //cin >> f >> h1 >> x >> h2 >> y;

    // 2. cin.get()
    cin >> f;
    cin.get();
    cin >> x;
    cin.get();
    cin >> y;
    
    cout << "010-" << y << "-" << x;

    return 0;
}