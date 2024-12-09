#include <iostream>
using namespace std;
//// 배열 거꾸로 탐색
// 입력받은 원소를 거꾸로 출력하고 싶다면, for loop을 거꾸로 돌려서 출력

/*  Q. 
문자 10개를 저장할 수 있는 배열을 만들고 10개의 문자를 입력받습니다. 
입력받은 문자의 순서를 거꾸로 출력하는 프로그램을 작성해보세요.*/
int main() {
    char arr[10];
    for(int i=0;i<10;i++) cin >> arr[i]; 

    for(int i=9;i>=0;i--) cout << arr[i];
    return 0;
}