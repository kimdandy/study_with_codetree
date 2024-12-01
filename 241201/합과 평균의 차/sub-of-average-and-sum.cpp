#include <iostream>
using namespace std;

// Q. 3개의 정수가 주어졌을 떄, 그 합과 평균을 구하고 합에서 평균을 뺀 값을 구하는 프로그램을 작성
int main() {
    int a,b,c;
    cin >> a >> b >> c;

    cout << a+b+c << endl << (a+b+c)/3 << endl << a+b+c-(a+b+c)/3;
    return 0;
}