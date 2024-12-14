#include <iostream>
using namespace std;
//// 순서대로 채우기

/* Q. 배열을 만들어서 아래 조건을 만족해 출력하는 프로그램을 작성해보세요.

# 첫 번째 행과 첫 번째 열은 모두 1로 초기화 합니다.
# 나머지 칸들은 바로 위의 값과 바로 왼쪽의 값을 더합니다.
# 크기는 5 * 5 입니다.
*/
int main() {
    
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==0 || j==0) arr[i][j] = 1;
            else arr[i][j] = arr[i-1][j] + arr[i][j-1];
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}