#include <iostream>
using namespace std;

/* Q. 아래 조건을 만족하도록 격자를 만들어 출력하는 프로그램을 작성해보세요.

# 첫 번째 행과 첫 번째 열에는 모두 1이 들어갑니다.

# 나머지 칸들은 바로 위의 값과 바로 왼쪽 값, 그리고 왼쪽 위의 값의 합이 되어야 합니다.

# 크기는 n x n 입니다. 
*/
int main() {
    int n; // 2 ≤ n ≤ 10
    cin >> n;

    int arr[10][10]; // n_max=10
    for(int i=0;i<n;i++){
        for(int j=0;j<n; j++){
            if(i==0 || j==0) arr[i][j] =1;
            else arr[i][j] =  arr[i-1][j] + arr[i][j-1] + arr[i-1][j-1];
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}