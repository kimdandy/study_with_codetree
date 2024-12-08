#include <iostream>
using namespace std;
//// cnt를 이용하여 숫자 모양 채우기 
//  i, j에 대한 규칙이 아닌, for loop이 진행됨에 따라 cnt 값을 계속 1씩 증가시키는 방식으로 해결

/// Q. 자연수 n이 주어집니다.
// 1부터 n * n까지 다음 규칙에 따라 출력하는 프로그램을 작성해보세요.
int main() {
    int n; // 1<=n<=100
    cin >> n;

    int cnt = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cnt+=1;
            cout << cnt << " ";
        }
        cout << endl;
    }
    return 0;
}