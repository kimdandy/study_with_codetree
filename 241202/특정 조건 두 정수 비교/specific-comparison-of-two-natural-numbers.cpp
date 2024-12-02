#include <iostream>
using namespace std;

// Q. 두 개의 정수를 입력 받아 첫 번째 수가 더 작으면 1을, 아니면 0을 출력하고, 두 개의 수가 같으면 1을, 아니면 0을 출력하는 프로그램을 작성하세요.
int main() {
    int a,b;
    cin >> a >> b;

    if (a<b) cout << 1;
    else cout << 0;

    if (a==b) cout << " " << 1;
    else cout << " " << 0;
    return 0;
}