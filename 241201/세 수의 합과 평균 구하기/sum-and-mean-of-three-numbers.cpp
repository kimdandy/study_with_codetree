#include <iostream>
using namespace std;

// Q. 3개의 정수를 입력받아서 합계와 평균을 출력하는 프로그램을 작성 (단, 평균의 소수점은 버린다.)
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << a+b+c << endl << (a+b+c)/3;
    return 0;
}