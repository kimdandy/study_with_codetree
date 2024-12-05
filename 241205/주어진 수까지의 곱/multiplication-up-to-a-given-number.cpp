#include <iostream>
using namespace std;
///* 조건을 만족하는 곱 구하기 *///
// 1을 초기값으로 갖는 prod라는 변수를 활용
// prod값에 조건을 만족하는 해당 숫자를 곱해주는 식으로 진행
// prod를 꼭 1로 초기화 하고 진행해야 함에 유의
/*
int prod = 1;

for (int i = a; i <= b; i++) {
	if (i % 2 == 0) {
		prod *= i;
	}
}
cout << prod;
*/

/// Q. a, b가 주어졌을 때 a부터 b까지의 곱을 출력하는 프로그램을 작성해보세요.
int main() {
    int a, b; // 1<=a<=b<=10
    int prod=1; // prod: 조건을 만족하는 모든 수의 곱의 값을 저장할 변수
    cin >> a >> b;

    for(int i=a;i<=b;i++) prod*=i;
    cout << prod;
    return 0;
}