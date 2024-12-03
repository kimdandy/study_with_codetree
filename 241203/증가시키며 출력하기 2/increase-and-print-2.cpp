#include <iostream>
using namespace std;
//* while loop*//
/* while : 해당 조건을 만족하는 경우에만 반복하여 수행
while (조건) {

    여기에 조건을 만족할 때만 수행되었으면 
    하는 코드를 작성

} -> 중괄호가 없다면 바로 다음 한줄만 내부코드로 인정 
*/
/* do-while : 조건을 먼저 따지는 while loop 와는 달리 반복문을 한번 실행한 후에 조건을 따져보게 됩니다.
do {

   여기에 조건을 만족할 때만 수행되었으면 
   하는 코드를 작성, 무조건 한번은 실행됨

} while (조건);
*/

/// Q. while문을 사용해 10부터 26까지 1씩 증가하며 출력하는 프로그램을 작성해보세요.
int main() {
    
    int i = 10;
    while (i<=26){
        cout << i << " ";
        i += 1;
    }

    return 0;
}