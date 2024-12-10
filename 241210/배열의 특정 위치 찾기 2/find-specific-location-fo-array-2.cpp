#include <iostream>
using namespace std;

/// Q. 10개의 정수를 입력받아 홀수 번째 입력받은 정수의 합과 짝수 번째 입력받은 정수의 합 중 큰 수에서 작은 수를 뺀 값을 출력하는 프로그램을 작성해보세요.
int main() {
    int arr[10];
    int sum1=0, sum2 =0; // sum1:홀수번째의 합 , sum2 : 짝수 번째의 합
    for (int i=0;i<10;i++) {
        cin >> arr[i]; // 1<=arr[i]<=100
        if((i+1)%2==1) sum1+=arr[i];
        else sum2+=arr[i];
    }
    
    if(sum1>sum2) cout << sum1-sum2;
    else cout << sum2-sum1;
    return 0;
}