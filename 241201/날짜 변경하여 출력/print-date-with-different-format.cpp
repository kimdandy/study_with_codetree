#include <iostream>
using namespace std;

int main() {
    int yyyy, mm , dd;
    char p1, p2;
    // 1.
    /*cin >> yyyy > p1 >> mm >> p2 >> dd;*/
    
    // 2.
    cin >> yyyy;
    cin.get();
    cin >> mm;
    cin.get();
    cin >> dd;

    cout << mm << "-" << dd << "-" << yyyy;
    return 0;
}