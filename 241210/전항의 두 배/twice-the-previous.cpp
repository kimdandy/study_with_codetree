#include <iostream>
using namespace std;

/* Q. 
수열의 첫 번째 항(A1)과 두 번째 항(A2)이 주어졌을 때, 10번째 항까지 구하는 프로그램을 작성해보세요.

이 수열은 세 번째 항부터 An=An−1+2An−2를 만족해야 합니다.

공백을 사이에 두고 출력합니다.*/
int main() {
    int arr[10]; // size_max=10
    for(int i=0; i<10; i++){
        if(i<2) cin >> arr[i]; // 1 ≤ arr[i](i=0, 1) ≤ 100
        else arr[i] = arr[i-1] + 2*arr[i-2];
        cout << arr[i] << " "; 
    }
    return 0;
}