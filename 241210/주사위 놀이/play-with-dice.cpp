#include <iostream>
using namespace std;

/* Q. 주사위를 10번 던진다고 합니다. 
던질 때마다 나온 숫자가 주어지면 각 숫자가 몇 번씩 나왔는지 출력하는 프로그램을 작성해보세요.*/
// 각 줄에 1~6까지 "주사위 숫자 - 나온 횟수"형식으로 출력합니다.
int main() {
    int arr[10];
    for(int j=0;j<10;j++) cin >> arr[j]; // 1~6

    for(int i=1;i<=6;i++){
        int cnt=0;
        for(int j=0;j<10;j++) if(arr[j]==i) cnt++;
        cout << i << " - " << cnt << endl;        
    }
    return 0;
}