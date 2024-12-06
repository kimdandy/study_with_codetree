#include <iostream>
using namespace std;

/* Q. 정수 n과 m의 값을 입력받아 별표로 이루어진 직사각형을 출력하는 프로그램을 아래 예를 참고하여 작성해보세요.

예)

n에 3을 m에 5를 입력받는 경우

* * * * *
* * * * *
* * * * *

*/
int main() {
    int n, m; // n:세로 길이 , m:가로 길이 , 1<=n, m<=9
    cin >> n >> m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) cout << "* ";
        cout << endl;
    }
    return 0;
}