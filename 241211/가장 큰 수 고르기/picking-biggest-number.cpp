#include <iostream>
using namespace std;
//// 주어진 숫자들 중 최댓값 구하기

///  Q. 10개의 정수가 주어지면 그 중 가장 큰 수를 골라 출력하는 프로그램을 작성하세요.
int main() {
    int arr[10];
    int max=0; // 최댓값 저장용 변수
    for(int i=0;i<10;i++) {
        cin >> arr[i]; // 1~1000
        if(max<arr[i]) max=arr[i];
    }
    cout << max;
    return 0;
}