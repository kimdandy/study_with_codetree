#include <iostream>
using namespace std;
//* n번 반복하기 *//
/*
for (int i = 1; i <= n; i++) {
   
   반복을 원하는 코드 작성

}
*/

/// Q. 문자를 입력받아서 8회 출력하는 프로그램을 작성해보세요.
int main() {
    char c;
    cin >> c;

    for (int i=0; i<8; i++)
        cout << c;

        
    return 0;
}