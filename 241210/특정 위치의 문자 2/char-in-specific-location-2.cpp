#include <iostream>
using namespace std;

/// Q. 10개의 문자를 입력받아서 두 번째, 다섯 번째, 여덟 번째 입력받은 문자를 차례로 출력하는 프로그램을 작성해보세요.
int main() {
    char arr[10];
    for (int i=0;i<10;i++) cin >> arr[i] ;

    cout << arr[1] << " " << arr[4] << " " << arr[7];
    return 0;
}