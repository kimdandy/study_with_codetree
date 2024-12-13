#include <iostream>
using namespace std;

/* Q. n * m크기의 직사각형에 정수를 0부터 순서대로 1씩 증가시키며 왼쪽 위에서부터 시작하여 다음과 같이 지그재그 모양으로 쭉 채우는 코드를 작성해보세요.

0 7  8 15 16 23
1 6  9 14 17 22
2 5 10 13 18 21
3 4 11 12 19 20
*/
int main() {
    int n, m; // 1 ≤ n, m ≤ 100
    cin >> n >> m;

    int arr[100][100]; // n_max=m_max=100
    int elm=-1; // 0부터 출력
    for(int j=0; j<m; j++)
        for(int i=0;i<n;i++) { // 가로(j)가 아닌 세로(i) 기준으로 수열 진행 -> Transpose
            elm++;
            if(j%2==0) arr[j][i] = elm;
            else arr[j][n-1-i] = elm; // 홀수 열에서는 역으로 진행
        }
    
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++) cout << arr[j][i] << " "; 
        cout << endl;
    }
    return 0;
}