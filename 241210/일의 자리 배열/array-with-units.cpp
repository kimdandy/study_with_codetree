#include <iostream>
using namespace std;
//// 10번째 피보나치 수 구하기
// 피보나치 수열이란 첫 번째 원소가 1, 두 번째 원소가 1, 세 번째 원소부터는 해당 원소의 값이 바로 직전 두 원소의 합과 동일한 수열
// fibonacci[i] = fibonacci[i-1] + fibonacci[i-2] (i>1)

/// Q. 10 미만의 정수 두 개가 주어지면 순서대로 첫 번째, 두 번째 항으로 설정한 후 세 번째 항부터는 전전항과 전항의 합을 구하여 그 합의 1의 자리로 채워서 차례로 10개를 출력하는 프로그램을 작성해보세요.
int main() {
    int arr[10]; // 최소크기 12
    cin >> arr[0] >> arr[1]; // 1<=arr[0],arr[1]<=9

    cout << arr[0] << " " << arr[1] << " ";
    for(int i=2;i<10;i++){
        arr[i] = arr[i-1] + arr[i-2];
        cout << arr[i]%10 << " ";
    }
    return 0;
}