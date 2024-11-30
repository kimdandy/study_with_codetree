#include <iostream>
using namespace std;

int main() {
    // 두 변수값을 교환 ; temp 활용
    int a=3, b=5, temp;

    temp=a; 
    a=b;
    b=temp;
    
    cout << a << endl << b;
    return 0;
}