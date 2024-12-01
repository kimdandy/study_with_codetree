#include <iostream>
using namespace std;

// if/else if/else조건문
/*if (조건1) {
    코드1
}

else if (조건2) {
   코드2
}

else {
    코드3
}

코드4
*/

// Q. 물의 온도를 정수로 입력받아 0℃ 미만일경우엔 ice, 100℃ 이상일때는vapor, 그 사이일때는 water 라고 출력하는 프로그램을 작성해주세요.
int main() {
    int n;
    cin >> n;

    if(n<0){
        cout << "ice";
    }
    else if(n >= 100){
        cout << "vapor";
    }
    else{
        cout << "water";
    }
    return 0;
}