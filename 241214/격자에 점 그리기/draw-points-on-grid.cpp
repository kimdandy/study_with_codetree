#include <iostream>
using namespace std;

/* Q. m개의 점이 주어졌을 때 각각의 점을 n * n 크기의 격자에 번호를 표시하여 출력하는 프로그램을 작성해보세요. 
점의 번호는 정보가 따로 주어지진 않고 입력된 순서대로 부여됩니다. 
즉 첫 번째로 입력된 점은 1, k번째로 입력된 점은 k입니다.*/
int main() {
    int n, m; // 1 ≤ n ≤ 9 , 1 ≤ m ≤ n * n
    cin >> n >> m;
    int r, c; // 1 ≤ r ≤ n, 1 ≤ c ≤ n
    int placed[10][10] = {}; // ^ , n_max = 10, default : 0
    for(int k=1; k<=m; k++){ //   ^ , 1번부터 m번 까지 부여
        cin >> r >> c;
        placed[r][c] = k; 
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){ // 1 ≤ r ≤ n, 1 ≤ c ≤ n
            cout << placed[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}