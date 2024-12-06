#include <iostream>
using namespace std;
///* 모두 만족하는 경우 *///
// 모든 선택지가 다 조건을 만족시키는지에 대한 여부는 뒤집어 생각해 단 하나라도 만족하지 않는 경우가 있는지로 판단
// 조건을 만족 bool type 변수를 선언해 초기값으로는 다 만족한다는 의미로 true를 두고, 조건을 만족하지 않는 경우가 해당 변수의 값을 false로 바꿔주면 모든 조건을 만족하는지를 알 수 있음

/// Q. 정수 a, b가 주어지면, a이상 b이하에 c의 배수가 전혀 없는지 판단하는 프로그램을 작성해보세요.
int main() {
    int a, b, c; // 1<=a,b,c<=100 , a<=b
    cin >> a >> b >> c;

    bool st = true;
    for(int i=a;i<=b; i++){
        if(i%c==0) {
            st = false;
            break;
        }
    }
    if (st == true) cout << "YES";
    else cout << "NO";

    return 0;
}