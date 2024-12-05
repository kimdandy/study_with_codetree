#include <iostream>
using namespace std;
///* 반복문에서의 break *///
// break는 for, while 안에서만 사용이 가능
// continue와 굉장히 유사
// if 와 같이 쓰이며, 해당 조건이 만족하는 경우에는 가장 가까이에 있는 for loop을 완전히 탈출
// break는 조건문과 같이 쓰여야 함에 유의
/*
for (int i = a; i < b; i++) {

    코드1

    if (조건) {
        코드2 
        break; // for loop 탈출 후 코드 4 실행
    }
        
    코드3 // 조건이 충족 되지 않았을 경우에 실행
}

코드4
*/

/// Q. 정수 n이 주어졌을 때, 1부터 차례대로 100까지 1씩 증가시키며 합을 구하다가 처음으로 그 합이 n 이상이 되는 순간에 더해진 숫자가 무엇인지를 출력하는 프로그램을 작성해보세요.
int main() {
    int n; // 1<=n<=5000
    cin >> n;

    int sum=0, i; // i : 더해진 숫자
    for(i=1;i<=100;i++){
        sum += i;
        if(sum>=n) break;
    }
    cout << i;
    return 0;
}