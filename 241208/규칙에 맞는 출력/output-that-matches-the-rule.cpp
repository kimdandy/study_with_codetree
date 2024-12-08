#include <iostream>
using namespace std;

/* Q. 
정수 N이 주어졌을 때, 다음과 같은 규칙에 맞추어 출력하는 프로그램을 작성해보세요.

N=4 일 때
4
3 4
2 3 4
1 2 3 4
*/
int main() {
    int n; // 1<=n<=100
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=n-i+1; j<=n; j++) cout << j << " ";
        cout << endl;
    }
    return 0;
}