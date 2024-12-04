#include <iostream>
using namespace std;
//* if 문 안의 for 문 *//

/// Q. 문자 c와 숫자 n을 입력받아 c가 'A'면 1부터 n까지 숫자를 증가하는 순으로 출력하고, 'D'면 n부터 1까지 숫자를 감소하는 순으로 출력하는 프로그램을 작성해보세요.
int main() {
    char c;
    int n;
    cin >> c >> n;

    if (c=='A'){
        for(int i=1;i<=n;i++) cout << i << " ";
    }    
    else if(c=='D'){
        for(int i=n;i>=1;i--) cout << i << " ";
    }
    
    return 0;
}