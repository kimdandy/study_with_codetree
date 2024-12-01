#include <iostream>
using namespace std;

/* Q.
시험점수에 따라 등급을

90점 이상을 A,

80점 이상을 B,

70점 이상을 C,

60점 이상을 D,

60점 미만을 F 라고 합니다.

점수를 입력받아 등급을 출력하는 프로그램을 작성해주세요.
*/
int main() {
    int n;
    cin >> n;

    if (n>=90){
        cout << "A";
    }
    else if(n>=80){
        cout << "B";
    }
    else if (n>=70){
        cout << "C";
    }
    else if (n>=60){
        cout << "D";
    }
    else{
        cout << "F";
    }
    return 0;
}