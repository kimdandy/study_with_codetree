#include <iostream>
using namespace std;
//* while loop 2씩 증가 *//
// 증감값을 설정하는 부분의 코드만 2씩 증가하는 것으로 바꿔주면 됩니다.

// Q. while문을 사용해 10부터 26까지 2씩 증가하면서 출력하는 프로그램을 작성해보세요.
int main() {
    
    int i=10;
    while (i<=26){
        cout << i << " ";
        i +=2; // <- 증감식
    }
    return 0;
}