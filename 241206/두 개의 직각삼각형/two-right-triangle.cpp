#include <iostream>
using namespace std;

/*  Q. 정수 n이 주어졌을 때, 아래 예를 참고하여 * 로 이루어진 직각삼각형 대칭으로 2 개 출력하는 프로그램을 작성해보세요.

예) n = 3 일 때

******
**  **
*    *

*/
int main() {
    int n; // 1<=n<=10
    cin >> n;

    for (int i=n;i>=1;i--){
        for (int j=i;j>=1;j--) cout << "*"; // *의 개수 : (n-행번호)*2
        for (int j=1;j<=2*(n-i);j++) cout << " "; // 공백의 개수 : (행번호-1)*2
        for (int j=i;j>=1;j--) cout << "*";
        // ^ 같은 변수 재활용 가능 => for문 안에서만 선언 했기 때문
        cout << endl;
    }
    return 0;
}