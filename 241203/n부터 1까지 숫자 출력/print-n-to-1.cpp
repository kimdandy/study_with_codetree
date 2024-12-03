#include <iostream>
using namespace std;

/// Q. 자연수 n을 입력받아 while문을 사용하여 n부터 1까지 숫자를 출력하는 프로그램을 작성해보세요.
int main() {
    int n;
    cin >> n;

    while(n>=1){
        cout << n << " ";
        n --;
    }
    return 0;
}