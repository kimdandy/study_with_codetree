#include <iostream>
using namespace std;
//// 배열의 선언과 참조
/*  빈 배열 선언
    int a[10]; 정수 배열
    double a[10]; 실수 배열 
    char b[10]; 문자 배열
*/
/* 배열의 초기값 설정은 { }
    int a[4] = {1,2,3,4};
*/
/* 배열 a의 n번째 원소 바꾸기
    a[n-1] = x;
*/
/* 배열 a의 n 번째 칸에 입력받기
    cin >> a[n]
*/
// 크기 n 인 배열에 n보다 더 작은 수의 원소로 { } 초기화하면, 인덱스 0부터 순서대로 채워짐
/* 만약 배열의 모든 원소를 0으로 초기화하고 싶다면,
    int arr[5] = {};
*/

/* Q. 500이하의 정수가 총 10번 주어지는데, 250이상의 정수가 주어지면 마지막으로 주어진 수를 제외하고 주어진 모든 정수들의 합계와 평균을 구하는 프로그램을 작성해보세요. 
단, 250이상의 정수가 없다면 10개의 합계와 평균을 계산하면 됨에 유의합니다.
평균은 반올림하여 소수 첫째자리까지 출력합니다.*/
int main() {
    int arr[10];
    int sum = 0, cnt=0;
    for(int i=0;i<10; i++) {
        cin >> arr[i]; // 1<= arr[i]<=500
        if(arr[i]>=250) break;
        sum += arr[i];
        cnt ++;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << double(sum)/cnt;
    return 0;
}