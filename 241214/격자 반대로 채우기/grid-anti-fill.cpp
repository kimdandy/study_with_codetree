#include <iostream>
using namespace std;

/* Q. 
n x n 크기의 격자에 정수를 채워넣으려고 합니다. 
1부터 시작해서 차례대로 n ^2까지 채워넣는데, 다음 그림과 같이 오른쪽 아래에서 부터 위 아래 지그재그 방향으로 채워넣는 프로그램을 작성해보세요.
13 12 5 4
14 11 6 3
15 10 7 2
16  9 8 1
*/
int main() {
    int n; // 1 ≤ n ≤ 10
    cin >> n;

    int arr[10][10]; // n_max = 10
    int elm=0;
    for(int j=n-1;j>=0;j--){
        for(int i=n-1;i>=0;i--){
            elm++;
            if( (n-1 - j) % 2 == 0) arr[j][i]=elm;
            else arr[j][n-1-i]=elm;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j <n; j++) cout << arr[j][i] << " "; // 출력할 때도 전치 한 상태임에 유의
        cout << endl;
    }
    return 0;
}