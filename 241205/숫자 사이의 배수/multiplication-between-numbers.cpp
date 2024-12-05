#include <iostream>
using namespace std;

/// Q. 두 개의 정수 a, b를 입력받아 a부터 b까지의 수 중 5 또는 7의 배수들의 합과 평균을 출력하는 프로그램을 작성해보세요.
int main() {
    int a, b; // (1<=a, a+5<=b<=100)
    int sum=0, cnt=0; // sum : 정해진 수들의 합, cnt: 정해진 수들의 개수 -> sum/cnt : 평균
    cin >> a >> b;

    for(int i=a; i<=b; i++){
        if (i%5==0 || i%7==0) {
            sum+=i;
            cnt+=1;
        }
    }
    cout << fixed;
    cout.precision(1); // 소수점 아래 첫번째까지
    cout << sum << " " << double(sum)/cnt; // 실수 계산을 위해 나누는 수를 실수화
    return 0;
}