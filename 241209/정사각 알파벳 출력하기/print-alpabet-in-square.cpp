#include <iostream>
using namespace std;
//// 아스키 코드 (ASCII)
// 아스키 코드 : c++에서 사용할 수 있는 모든 문자들은 전부 하나의 숫자와 대응
// 알파벳 대문자 (A, B, C, ...), 소문자 (a, b, c, ....) 끼리는 연속한 숫자들로 매칭
// c++에서 특정 문자의 아스키 코드 값은 해당 문자의 정수형 출력을 이용해 알 수 있음
// (int)'A'
// 반대로 아스키 코드 값을 알고 있을 때, 대응되는 문자의 아스키 코드값을 문자형 변환을 통해 출력
// (char)65
// 특정 대문자 알파벳 x 다음에 오는 문자는 x+1로 표현이 가능

/* Q. 정수 n의 값이 주어집니다.

n×n 크기의 정사각형 모양으로 알파벳을 출력하는 프로그램을 작성해보세요.

위에서 아래로, 왼쪽에서 오른쪽으로 읽었을 때, 알파벳 대문자가 A부터 차례대로 배열되어야 합니다.
*/
int main() {
    int n; // 1<=n<=5
    cin >> n;

    int a = (int)'A'; 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) {
            cout << (char)a;
            a++;
            }
        cout << endl;
    }
    return 0;
}