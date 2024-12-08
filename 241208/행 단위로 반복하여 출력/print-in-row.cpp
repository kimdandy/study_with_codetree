#include <iostream>
using namespace std;
/// 숫자 모양 출력 ///

/// Q. 정수 n의 값이 주어지면 행 단위로 반복하여 출력하는 프로그램을 작성해보세요.
int main() {
    int n; // 1<=n<=9
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) cout << j;
        cout << endl;
    }
    return 0;
}