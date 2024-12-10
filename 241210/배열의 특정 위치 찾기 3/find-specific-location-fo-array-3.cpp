#include <iostream>
using namespace std;
//// 배열의 마지막원소
// 배열 원소의 개수가 n 임을 알고 있을때, 마지막 원소의 index 는 n-1

/* Q.  정수가 차례로 주어지다가 0이 주어지면 처음으로 주어진 0에 대해서 앞의 3개를 수를 더하여 출력하는 프로그램을 배열을 사용하여 작성해보세요. 
(단, 0은 네 번째 이후부터 주어진다고 가정해도 좋습니다.)*/
int main() {
    int arr[100]; // 최대 100개의 정수
    int n; // 0이 주어진 위치
    for(int i=0;i<100;i++){
        cin >> arr[i]; // -100 <= arr[i] <=100
        if(arr[i]==0){
            n=i;
            break;
        }
    }

    cout << arr[n-1] +arr[n-2] +arr[n-3];
    return 0;
}