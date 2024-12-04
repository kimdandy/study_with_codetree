#include <iostream>
using namespace std;
//* 조건을 만족하는 개수 세기 *//
/*0을 초기값으로 갖는 cnt라는 변수를 활용하여, for 안에서 i값이 짝수일 때만 cnt값을 1씩 증가하는 식으로 진행해볼 수 있습니다. 
cnt를 꼭 0으로 초기화 하고 진행해야 함에 유의합니다.

int cnt = 0;

for (int i = a; i <= b; i++) {
	if (i % 2 == 0) {
		cnt++;
	}
}

% cnt 초기화식/출력식 은 항상 for문 외부에서, cnt증감식은 항상 if문 내부 에서 선언
*/

/// Q. 10개의 숫자 중 홀수의 개수를 출력하는 프로그램을 작성해보세요.
int main() {
    int n, cnt=0;
    for(int i=1;i<=10;i++){
        cin >> n;
        if(n%2==1) cnt +=1;
    }
    cout << cnt;
    return 0;
}