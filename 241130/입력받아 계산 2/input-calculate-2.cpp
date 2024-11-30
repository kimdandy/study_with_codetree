#include <iostream>
using namespace std;

int main() {
    // 공백을 사이에 두고 입력 // cin >> a >> b ;  
    // cin 은 공백단위로 입력을 받기에 공백을 무시하고 다수의 숫자만 입력 받음
    // ex) 2 3 입력 -> a=2, b=3
    int a, b;
    cin >> a >> b;
    int c = a * b;
    cout << c;
    return 0;
}