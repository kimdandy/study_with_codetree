#include <iostream>
using namespace std;
///* 행에 대하여 대칭인 경우 *///
/* 바깥 포문은 출력할 행의 개수 만큼
안쪽 포문은 각 행에 대해 출력되어야 하는 *의 수만큼 돌면서 *을 출력 */
// 행에 대해 대칭인 모양이므로 i에 대한 for loop만 수정해주면, j에 대한 코드를 전혀 고칠 필요가 없다는 것이 핵심

// j가 i에 따라 몇 번 돌아야 하는지가 잘 보이지 않는다면, 출력할 * 개수를 나타내는 cnt 변수를 이용해 해결

/* Q. 정수 n의 값을 입력받아 별표를 출력하는 프로그램을 아래 예를 참고하여 작성해보세요.

예)

n에 2를 입력받는 경우

*
* *
*
n에 3을 입력받는 경우

*
* *
* * *
* *
*

*/
int main() {
    int n; // 1<=n<=10
    cin >> n;

    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout << "* ";
        cout << endl;
    }
    for (int i=n-1;i>=1;i--){
        for(int j=i;j>=1;j--) cout << "* ";
        cout << endl;
    }
    return 0;
}