#include <iostream>
using namespace std;

// if / else if / else if / else조건문
/*if (조건1) {
    코드1
}
else if (조건2) {
    코드2
}
else if (조건3) {
    코드3
}
else {
    코드4
}
코드5
*/

// Q. A반의 출석번호 1번은 John, 2번은 Tom, 3번은 Paul입니다. 번호를 입력하면 해당하는 학생의 이름을 출력하는 프로그램을 작성하세요.
int main() {
    int n;
    cin >> n;

    if ( n == 1){
        cout << "John";
    }
    else if (n == 2){
        cout << "Tom";
    }
    else if (n == 3){
        cout << "Paul";
    }
    else {
        cout << "Vacancy";
    }
    return 0;
}