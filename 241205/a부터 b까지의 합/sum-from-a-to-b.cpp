#include <iostream>
using namespace std;
///* 조건을 만족하는 합 구하기 *///
// 0을 초기값으로 갖는 sum_val라는 변수를 활용
// sum_val값에 조건에 맞는 해당 숫자를 더해주는 식으로 진행
// sum_val을 꼭 0으로 초기화 하고 진행해야 함에 유의
/*
int sum_val = 0;
for (int i = 1; i <= n; i++) {
	if (i % 2 == 0) {
		sum_val += i;
	}
}
cout << sum_val;
*/

/// Q. a, b 두 자연수를 입력받아 a부터 b까지의 합을 구해 출력하는 프로그램을 작성해보세요.
int main() {
    int a, b, sum=0; // sum값 초기화
    cin >> a >> b;

    for(int i=a;i<=b;i++) sum+=i;
    cout << sum;
    return 0;
}