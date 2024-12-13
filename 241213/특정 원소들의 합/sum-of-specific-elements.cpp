#include <iostream>
using namespace std;

/* Q. 4 x 4 크기의 격자에 정수가 하나씩 주어져있습니다. 
이 정수들 중 다음 그림에서 색칠된 칸들에 해당하는 정수의 합을 2차원 배열을 통해 구하는 프로그램을 작성해보세요.
1000
1100
1110
1111
*/
int main() {
    int arr[4][4];
    int sum=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++) cin >> arr[i][j]; // 1~100

        for(int j=0;j<=i;j++) sum+=arr[i][j];
    }
    cout << sum;
    return 0;
}