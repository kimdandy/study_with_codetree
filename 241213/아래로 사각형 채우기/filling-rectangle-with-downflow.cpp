#include <iostream>
using namespace std;
//// 2차원 배열과 포문

/* Q. 정사각형 한 변의 길이 n이 주어지면 아래 예와 같이 정수로 된 정사각형 형태로 출력하는 프로그램을 작성해보세요.

예)

n에 3이 주어지는 경우
1 4 7
2 5 8
3 6 9

n에 4가 주어지는 경우
1 5 9 13
2 6 10 14
3 7 11 15
4 8 12 16
*/
int main() {
    int n; // 1 ≤ n ≤ 10
    cin >> n;

    int arr[10][10]; // n_max=10
    int elm=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            elm++;
            arr[j][i] = elm;
        }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;;
}