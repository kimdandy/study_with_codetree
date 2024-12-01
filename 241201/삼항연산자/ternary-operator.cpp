#include <iostream>
#include <string>
using namespace std;


/* Q. 시험 결과가 100점일 경우에만 0등급을, 그 외엔 점수에 따른 등급 1~9를 부여하기로 했다. 
오로지 등급 0 만 pass고, 나머지 등급을 받은 사람들의 점수를 failure라고 출력하는 프로그램을 
삼항연산자를 사용하여 작성해보세요. */
int main() {
    int score;
    cin >> score;

    // 1. string 사용
    /*string result = (score == 100) ? "pass" : "failure";
    cout << result;*/

    // 2. 바로 출력
    cout << ((score == 100) ? "pass" : "failure");
    
    return 0;
}