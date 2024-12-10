#include <iostream>
using namespace std;

/* Q. 세자리 미만의 정수가 주어지다가 0이 주어지면 그 0을 제외하고 그 때까지 입력된 정수의 숫자들의 십의 자리 숫자가 각각 몇 개인지 작은 수부터 출력하는 프로그램을 작성해보세요. 
단, 0이 첫 번째 부터 주어지지않는다고 가정해도 좋습니다.*/
int main() {
    int arr[99]; // size_max = 100
    int sz; // 0이 입력된 위치
    for(int i=0;i<99;i++) {
        cin >> arr[i]; // 0 ≤ arr[i] ≤ 99
        if(arr[i]==0) {
            sz = i;
            break;
        }
    }

    for(int j=1;j<10;j++){
        int cnt=0;
        for(int i=0;i<sz;i++) if(arr[i]/10==j) cnt++;
        cout << j << " - " << cnt << endl;
    }
    return 0;
}