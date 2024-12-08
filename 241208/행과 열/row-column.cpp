#include <iostream>
using namespace std;
//// 숫자규칙 찾기 ////

/// Q. 행과 열의 수를 a, b로 입력받아 출력하는 프로그램을 작성해보세요.
/*
예제1
입력:

4 5
출력:

1 2 3 4 5
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20
*/
int main() {
    int a, b; // 1<=a,b<=10
    cin >> a >> b;

    for(int i=1; i<=a;i++){
        for(int j=1; j<=b; j++) cout << i*j << " ";
        cout << endl;
    }
    return 0;
}