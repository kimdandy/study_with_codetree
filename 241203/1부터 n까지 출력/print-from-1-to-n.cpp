#include <iostream>
using namespace std;

/// Q. n을 입력받아, 1부터 n까지 공백을 두고 출력하는 프로그램을 작성해보세요.
int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++)
        cout << i << " ";
        
    return 0;
}