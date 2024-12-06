#include <iostream>
using namespace std;

/* Q. 정수 n을 입력받아 문자를 특정 규칙에 따라 출력하는 프로그램을 아래 예를 참고하여 작성해보세요.

예)

n에 2를 입력받는 경우

  @
@ @
@

*/
int main() {
    int n; // 1<=n<=10
    cin >> n;

    for(int i=1; i<=n; i++){ // 문자 @ 기준
        for(int j=n-i;j>=1;j--) cout << "  "; // 공백의 개수 : n-행 번호
        for(int j=1;j<=i; j++) cout <<"@ "; // @의 개수 : 행번호(i)
        cout << endl;
    }
    for(int i=1; i<=n-1; i++){ 
        // 공백을 구현할 필요가 없음
        for(int j=n-i;j>=1; j--) cout <<"@ "; // @의 개수 : n-행번호
        cout << endl;
    }

    return 0;
}