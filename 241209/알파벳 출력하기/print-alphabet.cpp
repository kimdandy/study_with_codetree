#include <iostream>
using namespace std;

/* Q. 정수 n의 값을 입력받아 다음과 같이 영문자를 출력하는 프로그램을 아래 예를 참고하여 작성해보세요. Z 다음에는 A가 나와야 합니다.

예)

n에 2가 주어지는 경우
A
BC

n에 3가 주어지는 경우
A
BC
DEF
*/
int main() {
    int n; // 1<=n<=15
    cin >> n;

    int a = (int)'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << (char)a;
            if( (char)a =='Z') a = (int)'A';
            else a++;
        }
        cout << endl;
    }
    return 0;
}