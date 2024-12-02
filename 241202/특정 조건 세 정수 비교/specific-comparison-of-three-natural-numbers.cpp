#include <iostream>
using namespace std;

// Q. 3개의 정수를 입력 받아 첫 번째 수가 세 정수의 최솟값과 일치한다면 1 아니면 0을 출력하고, 세 개의 수가 모두 같으면 1 아니면 0 을 출력하는 프로그램을 작성해주세요.
int main() {
    int a,b,c;
    cin >> a >> b >> c;

    if(a<=b and a<=c) cout << 1;
    else cout << 0;

    if(a==b && a==c) cout << " " << 1;
    else cout << " " << 0;
    
    return 0;
}