#include <iostream>
using namespace std;
//* while loop 1씩 감소 *//
//  while loop 안에서 증감값을 설정하는 부분의 코드만 1씩 감소하는 것으로 바꿔주면 됩니다.

/// Q. while문을 사용해 26부터 10까지 1씩 감소하며 출력하는 프로그램을 작성해보세요.
int main() {
    
    int i = 26;
    while(i>=10){
        cout << i << " ";
        i--;
    }
    return 0;
}