#include <iostream>
using namespace std;
/* for loop 1씩 감소 */
// 감소하는 증감식의 경우 i -= c

/// Q. 17부터 5까지 1씩 감소하며 출력하는 프로그램을 작성해보세요. 
int main() {
    
    for( int i=17;i>=5;i--)
        cout << i << " ";
        
    return 0;
}