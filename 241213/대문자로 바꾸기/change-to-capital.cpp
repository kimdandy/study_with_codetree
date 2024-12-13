#include <iostream>
using namespace std;

/// Q. 소문자 알파벳으로 이루어진 5행 3열의 배열이 주어지면 대문자로 바꾸어서 출력하는 프로그램을 작성해보세요.
int main() {
    char arr[5][3];
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
            cout << (char)( (int)arr[i][j] -32 ) << " "; // 대문자와 소문자 사이의 아스키 코드 차이는 33
        }
        cout << endl;
    }
    return 0;
}