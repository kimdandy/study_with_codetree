#include <iostream>
using namespace std;

/* Q. 
10개의 정수를 저장할 수 있는 배열을 선언하고 정수를 차례로 입력받다가 0이 입력되면 10개 입력이 끝나지 않았더라도 그때까지 입력된 정수를 가장 나중에 입력된 정수부터 차례대로 출력하는 프로그램을 작성해보세요. 
단, 처음부터 0이 주어지는 경우는 고려하지 않아도 됩니다.*/
int main() {
    int arr[10], cur; // cur : 0이 입력된 직전의 위치
    for(int i=0;i<10;i++) {
        cin >> arr[i]; // 0<=arr[i]<=100
        if( arr[i] == 0) {
            cur = i-1;
            break;
            }
    }
    for(int i= cur; i>=0;i--) cout << arr[i] << " ";  
    return 0;
}