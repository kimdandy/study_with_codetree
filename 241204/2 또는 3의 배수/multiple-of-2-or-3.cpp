#include <iostream>
using namespace std;
//* for문 안의 if문 *//

/// Q. 1부터 n까지 순서대로 확인하여 해당 숫자가 2의 배수거나 3의 배수이면 1을, 아니면 0을 각각 공백을 사이에 두고 출력하는 프로그램을 작성해보세요.
int main() {
    int n;
    cin >> n;

    for (int i=1; i<=n; i++){
        if(i%2==0 || i%3==0) cout << 1;
        else cout << 0 ;
    cout << " ";
    }

    return 0;
}