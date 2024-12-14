#include <iostream>
using namespace std;

/* Q. 행의 크기가 정수 n으로 주어집니다. 
행의 크기가 n인 파스칼 삼각형을 출력하는 프로그램을 작성해보세요. 
파스칼 삼각형이란 다음과 같은 형태로 나타나며, (i, j)에 적힌 수가 (i - 1, j - 1)에 적힌 수와 (i - 1, j)에 적힌 수의 합으로 나타납니다.
n = 5일때의 예
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/
int main() {
    int n; // 1 ≤ n ≤ 15
    cin >> n;

    int arr[15][15]; //n_max = 15
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(j==0 || j==i) arr[i][j] = 1;
            else arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}