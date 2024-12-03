#include <iostream>
using namespace std;
/* for loop 2씩 증가 */
//  for loop 의 증감문을 고쳐주면 됩니다. // i++ -> i+=2

// Q. 5부터 17까지 2씩 증가하면서 출력하는 프로그램을 작성해보세요.
int main() {
    
    for(int i=5;i<=17;i+=2)
        cout << i << " ";
        
    return 0;
}