#include <iostream>
using namespace std;
///* 단 하나라도 만족하는 경우 *///
// true, false 두 값을 갖는 bool type의 변수를 활용
// bool type 변수의 초기값으로는 false를 두고, 조건을 만족한다면 해당 변수의 값을 true로 바꿔주면 단 하나라도 조건을 만족하는 경우가 있었는지를 알 수 있게 됨

/// Q. 정수 a, b가 주어지면, a이상 b이하에 c의 배수가 단 하나라도 있는지 판단하는 프로그램을 작성해보세요.
int main() {
    int a, b, c; // 1<=a,b,c<=100 , a<=b
    cin >> a >> b >> c;

    bool st = false;
    for(int i=a;i<=b;i++){
        if(i%c==0){
            st = true;
            break;
        }
    }
    if(st==true) cout << "YES";
    else cout << "NO";

    return 0;
}