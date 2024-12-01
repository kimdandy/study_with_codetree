#include <iostream>
using namespace std;

int main() {

    int h, m;
    // 1.  특정문자를 사이에 두고 2개의 값을 입력   
    char c = ':';

    cin >> h >> c >> m;

    // 2. 특정 문자 삽입 않고 cin.get() 활용
    /*cin >>h;
    cin.get();
    cin >> m;*/ 

    int hh = h + 1;

    cout << hh << ":" << m;

    return 0;
}