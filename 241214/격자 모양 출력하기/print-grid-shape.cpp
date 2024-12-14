#include <iostream>
using namespace std;

/* Q. n x n 크기의 격자의 칸 위에 m 개의 점이 놓여져 있습니다.

각 점의 크기는 해당 칸의 행 번호와 열 번호의 곱이 됩니다.

각 점의 위치에 해당하는 정보가 주어질 때, 격자의 모양을 출력하는 프로그램을 작성해보세요.

단, 행과 열의 번호는 1부터 시작됩니다.*/
int main() {
    int n, m; // 1 ≤ n ≤ 10, 1 ≤ m ≤ n * n
    cin >> n >> m;
    int r, c; // 1 ≤ r ≤ n, 1 ≤ c ≤ n
    int placed[11][11]={}; // ^ -> 0~n_max=10;11 , default : 0
    for(int k=0; k<m;k++){
        cin >> r >> c;
        placed[r][c] = r*c;
    }

    for(int i=1; i<=n;i++){
        for(int j=1;j<=n;j++) cout << placed[i][j] << " ";
        cout << endl;
    }

    return 0;
}