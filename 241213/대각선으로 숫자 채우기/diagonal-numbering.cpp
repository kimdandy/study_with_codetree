#include <iostream>
using namespace std;

/* Q. n * m크기의 직사각형에 정수를 1부터 순서대로 1씩 증가시키며 왼쪽 위에서부터 시작하여 오른쪽 아래 쪽까지 다음과 같은 방향으로 쭉 채우는 코드를 작성해보세요.
 
 1  2  4  7 11 15
 3  5  8 12 16 19
 6  9 13 17 20 22
10 14 18 21 23 24
*/
int main() {
    int n, m; // 1 ≤ n, m ≤ 100
    cin >> n >> m;

// 오른쪽 위 대각선 내 에 있는 원소들의 공통점은 위치 의 값(행과 열)의 합이 같다
/*
(0,0) -> 0 + 0 = 0 , 1개
(1,0)(0,1) -> 1+0 = 0+1=1, 2개
(2,0)(1,1)(0,2) -> 2+0 = 1+1=0+2=2, 3개
...
*/ 

    int arr[100][100]; // n_max=m_max=100
    int elm=0;
    for (int k=0; k<m;k++){
        for(int i=0;i<n;i++){
            if(k-i <0) break; // k>n>i
            elm ++;
            arr[i][k-i] = elm;
        }  
    }
    for(int k=m;k<m+n-1;k++){
        for(int j=m-1; j>=0; j--){
            if(k-j >= n) break; // k_up=m+n-1 > k_up-1=m+n-2  >= n+j
            elm++;
            arr[k-j][j] = elm;
        }
    }
        
    

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}