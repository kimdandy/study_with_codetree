#include <iostream>
using namespace std;
//// 배열 값 참조
// 배열 arr에서 i번째 원소의 값을 얻기 위해서는 arr[i - 1]을 참조

/* Q. 10개의 정수를 입력받습니다.
입력받은 정수에서 세 번째, 다섯 번째, 열 번째 정수의 합을 출력하는 프로그램을 작성해보세요. */
int main() {
    int arr[10];
    for(int i=0;i<10;i++) cin >> arr[i]; // 0<=arr[i]<=100

    cout << arr[2] + arr[4] + arr[9];
    return 0;
}