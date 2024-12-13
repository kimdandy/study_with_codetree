#include <iostream>
using namespace std;

/* Q. n x m 크기의 2차원 격자가 두 개 주어지고, 새로운 2차원 격자를 만들려고 합니다.

주어진 두 격자에서 같은 위치에 존재하는 수의 값이 같다면 0, 그렇지 않다면 1을 적어주려 합니다.

새로운 2차원 격자를 만들어 이를 해결하는 프로그램을 작성해보세요.*/
int main() {
    int n, m; // 1 ≤ n, m ≤ 10
    cin >> n >> m;
    int a[10][10], b[10][10]; // n_max = m_max = 10
    for(int i=0; i<n;i++)
        for(int j=0;j<m;j++)
            cin >> a[i][j]; // 1~10

    for(int i=0; i<n;i++)
        for(int j=0;j<m;j++)
            cin >> b[i][j]; // 1~10

    int ans[10][10];
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == b[i][j]) ans[i][j] =0;
            else ans[i][j] = 1;
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}