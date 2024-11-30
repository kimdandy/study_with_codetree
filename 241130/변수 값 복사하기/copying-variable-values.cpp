#include <iostream>
using namespace std;

int main() {
    // 변수값 동시에 복사
    int a=1,b=2,c=3;
    a=b=c; // 오른쪽에서 부터 처리하여 먼저 c의값이 b에 할당, 그후 b=c의 값이 a에 할당
    cout << a << " " << b << " " << c;
    return 0;
}