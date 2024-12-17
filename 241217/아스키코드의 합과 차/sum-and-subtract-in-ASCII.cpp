#include <iostream>
using namespace std;
//// 문자에 대응되는 아스키 코드 값 (ASCII)
// ++ 에서 사용할 수 있는 모든 문자들은 전부 하나의 숫자와 대응되며, 이를 아스키 코드
// 그 중에서도 알파벳 대문자 (A, B, C, ...), 소문자 (a, b, c, ....) 끼리는 연속한 숫자들로 매칭

/// Q. 영문자 두 개가 주어지면 각 문자의 아스키코드의 합과 차를 출력하는 프로그램을 작성해보세요.
int main() {
    char c1, c2;
    cin >> c1 >> c2;

    int sum = (int)c1 + (int)c2 ;
    int sub = ( (int)c1 > (int)c2 ) ? (int)c1 - (int)c2 : (int)c2 - (int)c1;

    cout << sum << " " << sub;  
    
    return 0;
}