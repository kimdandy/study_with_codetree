#include <iostream>
using namespace std;

/* Q. 1이상 10이하의 정수 중 한 개를 입력받아 배수들을 차례로 출력하다가 5의 배수가 2번 출력되면 종료되는 프로그램을 작성해보세요. 
단, 배열을 이용하여 해결해보세요.
공백을 사이에 두고 출력합니다.
*/
int main() {
    int n; // 1 ≤ n ≤ 10
    cin >> n;

    int arr[10]; // _max=10
    int cnt =0;
    for(int i=0;i<10;i++){
        if(i==0) arr[i]=n;
        else arr[i] = arr[i-1] +n;
        cout << arr[i] << " ";
        if(arr[i]%5==0 ) cnt++;
        if(cnt==2) break;
    }
    return 0;
}