#include <iostream>
using namespace std;

// Q. 두개의 정수를 입력받아 큰수에서 작은 수를 뺀 차를 출력하는 프로그램을 작성
int main() {
    int a, b;
    cin >> a >> b;
    if (a>=b){
        cout << a-b;
    }
    if (a<b){
        cout << b-a;
    }
    
    return 0;
}