#include <iostream>
using namespace std;
/* for loop ; 반복문 */
/*
for( 초기화식(int i=a) ; 조건식(i<b) ; 증감식(i++) ) {
    
    반복할 코드

} // -> 중괄호가 없다면 바로 다음 한줄만 내부 코드로 인정

% 반복문에서의 공백을 사이에 두고 출력 : cout << i << " ";
*/

int main() {
    
    for(int i=5;i<=17;i++)
        cout << i << " ";
    return 0;
}