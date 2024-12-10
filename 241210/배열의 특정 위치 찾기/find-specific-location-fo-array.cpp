#include <iostream>
using namespace std;
//// 배열의 특정 규칙의 index 참조

/* Q. 크기가 10인 정수로 이루어진 수열이 주어졌을 때, 다음 2개의 값을 출력하는 프로그램을 작성해보세요.

1. 짝수 번째로 입력된 값의 합
2. 3의 배수 번째로 입력된 값의 평균

합과 평균을 공백을 사이에 두고 출력합니다. 
평균은 반올림하여 소수 첫째 자리까지 출력합니다.
*/
int main() {
    int arr[10];
    int sum2 = 0, sum3=0; // sum2: 짝수번째 입력된 값들의 합 , sum3 : 3의 배수 번째로 입력된 값의 평균
    for(int i=0;i<10;i++){
        cin >> arr[i]; // 1<=arr[i]<=100
        if((i+1)%2==0) sum2 += arr[i]; // 배열은 0부터 시작함에 주의
        if((i+1)%3==0) sum3 += arr[i]; 
    }
    cout << fixed;
    cout.precision(1);
    cout << sum2 << " " << double(sum3)/3;
    return 0;
}