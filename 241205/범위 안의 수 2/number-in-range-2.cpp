#include <iostream>
using namespace std;

/* 
10개의 정수가 주어집니다. 
입력으로 주어지는 수들 중 0이상 200이하의 정수들의 합과 평균을 출력하는 프로그램을 작성해보세요.*/
int main() {
    int z; // z: 입력받는 정수 , -500<=z<=500
    int sum=0, cnt=0; // sum:대상 수들의 합 , cnt : 대상 수들의 수
    for(int i=1;i<=10; i++){
        cin >> z;
        if(z>=0 && z<=200) {
            sum += z; cnt += 1;
        }
    }
    cout << fixed;
    cout.precision(1); // 소수 첫째 자리 까지 출력
    cout << sum << " " << double(sum)/cnt; // 실수 계산을 위해 나누는 수 실수화
    return 0;
}