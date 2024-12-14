#include <iostream>
using namespace std;
//// 2차 격자점으로서의 배열
// 특정 점 (a, b)가 존재하는지를 여러번 확인해야 하는 경우
// 일일이 모든 점에 대해 확인하는 것은 굉장히 비효율적
// 각 점들이 주어질때마다 해당 위치에 1로 표시해주는 방식으로 해결 'placed 배열'
/* placed
i/j  0 1 2 3 4 5 6 7 8 9 10
0    0 0 0 0 0 0 0 0 0 0  0
1    0 0 0 0 0 0 0 0 0 0  0
2    0 0 0 0 0 1 0 0 0 0  0
*/
// placed 배열의 (r, c)가 아닌 (r - 1, c - 1)에 표기하는 식으로도 진행 가능

/// Q. n * n 크기의 격자 위에 m개의 동전이 각각 어느 위치에 있는지 주어졌을 때, 현재 격자의 상태를 출력하는 프로그램을 작성해보세요.
int main() {
    int n, m; // 1 ≤ n ≤ 9, 1 ≤ m ≤ n * n
    cin >> n >> m;
    int r, c; // 1 ≤ r ≤ n, 1 ≤ c ≤ n
    int placed[10][10]={}; // n_max=9 , 1 ≤ r, c ≤ n, 모든 원소 default 값 : 0 
    for(int i=0; i<m;i++) {
        cin >> r >> c;
        placed[r][c] = 1;
    }

    for(int i=1; i<=n; i++){
        for(int j=1;j<=n;j++){ // 1 ≤ r, c ≤ n 
            cout << placed[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}