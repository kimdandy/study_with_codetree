#include <iostream>
using namespace std;

// Q. 정수 a를 입력받았을 때 13의 배수이거나 19의 배수인 경우는 True, 그 외의 경우는 False를 출력하는 프로그램을 작성해주세요.
int main() {
    int a;
    cin >> a;

    if ( a%13 == 0 or a%19==0) cout << "True";
    else cout << "False";

    return 0;
}