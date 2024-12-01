#include <iostream>
using namespace std;

int main() {
    
    int yyyy, mm, dd;
    // 1. 특정 문자를 사이에 두고 3개 이상의 값을 입력
    /*char p1, p2;
    cin >> mm >> p1 >> dd >> p2 >> yyyy;*/

    // 2. cin.get() 활용
    cin >> mm;
    cin.get();
    cin >> dd;
    cin.get();
    cin >> yyyy;

    cout << yyyy << "." << mm << "." << dd;

    return 0;
}