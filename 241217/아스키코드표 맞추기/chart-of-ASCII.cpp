#include <iostream>
using namespace std;
//// 아스키 코드에 대응되는 문자 (ASCII)
// (char)65 
//  A

/// Q. 33이상 126이하인 자연수 5개가 주어지면 해당하는 아스키코드값을 출력하는 프로그램을 작성해보세요.
int main() {
    int n;
    for(int i=0; i<5; i++){
        cin >> n;
        cout << (char)n << " ";
    }
    return 0;
}