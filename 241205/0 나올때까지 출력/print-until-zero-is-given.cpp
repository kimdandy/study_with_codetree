#include <iostream>
using namespace std;
///* 무한 루프 *///
// while문을 이용
// 무한 루프는 특정 조건을 만족하기 전까지는 절대 빠져나올 수 없는 loop을 만드는 것으로, while(true) 라는 계속 반복하는 조건과 특정 조건 만족시 탈출이 가능하도록 하는 break를 활용
/*
while (true) { // 무한 루프 포맷
    코드 1
    if (조건){
        코드2
        break;
    }
    코드3
}
코드4
*/

// while(1) 을 이용
// while(1) 이 무한 루프가 되는 이유 : 괄호안의 조건식이 1이라는 값이고, 이는 0(false)이 아닌 값이므로 앞에서 설명하였듯이 참(true)이 됨

// for loop 의 초기화식, 조건식, 증감식을 모두 생략하면 for 내부의 코드가 무한 반복
/*
for (;;){}
*/

/// Q. 숫자를 계속 입력받다가 0이 입력되기 전까지의 결과를 그대로 출력하는 프로그램을 작성해보세요.
int main() {
    int n; // 0<=n<=100
    while(true){
        cin >> n;
        if(n==0) break;
        cout << n << endl;
    }
    return 0;
}