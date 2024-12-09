#include <iostream>
using namespace std;

/* Q. 10개의 정수가 차례로 주어진다. 
최초로 0이 주어지기 전까지 주어진 정수 중 2의 배수의 개수와 합계를 출력하는 프로그램을 작성해보세요.
첫 번째 줄에 0이 주어지기 전까지의 2의 배수의 개수와 합계를 사이에 공백을 두고 출력합니다. */
int main() {
    int arr[10];
    int sum =0, cnt=0;
    for(int i=1;i<=10; i++){
        cin >> arr[i]; // 0<=arr[i]<=100
        if( arr[i]  == 0) break;
        if(arr[i]%2==0){
            cnt++;
            sum+=arr[i];
        }
    }
    cout << cnt << " " << sum;
    return 0;
}