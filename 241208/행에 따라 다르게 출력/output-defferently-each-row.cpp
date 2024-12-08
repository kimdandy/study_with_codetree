#include <iostream>
using namespace std;

/* Q. 자연수 n이 주어집니다. 1부터 다음 규칙에 따라 출력하는 프로그램을 작성해보세요.

규칙은 홀수 번째 줄에는 1씩 증가하고, 짝수 번째 줄에는 2씩 증가하는 것입니다.

n=4)
1 2 3 4
6 8 10 12
13 14 15 16
18 20 22 24

각 줄에는 각 행에 해당하는 n개의 숫자를 공백을 사이에 두고 출력합니다.
*/
int main() {
    int n; // 1<=n<=100
    cin >> n;

    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){     
            if(i%2==1)
                cnt++;
            else
                cnt+=2;
        cout << cnt << " ";
        }
        cout << endl;
    }
    return 0;
}