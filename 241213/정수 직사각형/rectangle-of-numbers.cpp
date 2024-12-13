#include <iostream>
using namespace std;
//// 새로운 2차원 배열 선언과 활용
// 전부 0으로 초기화된 2차원 배열
// int arr_2d[4][4] = {};

// 2차원 배열과 규칙

/* Q. 정수 n과 m의 값을 입력받아 정수로 이루어진 직사각형을 출력하는 프로그램을 아래 예를 참고하여 작성해보세요. 
단, 2차원 배열을 꼭 사용하여 해결해보세요. 

예)

n에 3을 m에 5를 입력받는 경우

1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
*/
int main() {
    int n, m; // 1 ≤ n, m ≤ 100
    cin >> n >> m;

    int arr[100][100]; // n_max=m_max=100
    int elm = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            elm++;
            arr[i][j] = elm;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}