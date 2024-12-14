#include <iostream>
using namespace std;
//// 문자열 리스트 관리
// 각 문자열들을 원소로 갖는 리스트를 정의
// 나의 문자열의 쓰임은 마치 1차원 배열과 같고, 문자열 리스트의 경우에는 마치 2차원 배열과 같이 동작하기 때문
/*
string arr[3] = { "banana", "apple", "pizza" };

cout << arr[0] << endl;           // banana <-첫 번째 문자열
cout << arr[0].length() << endl;  // 6 <-첫 번째 문자열의 길이

cout << arr[0][0] << endl;        // b <-첫 번째 문자열의 첫 번째 문자
cout << arr[0][1] << endl;        // a <-첫 번째 문자열의 두 번째 문자
cout << arr[1][2] << endl;        // p <-두 번째 문자열의 세 번째 문자
*/

/// Q. 5개의 문자열을 "apple", "banana", "grape", "blueberry", "orange"로 초기화 한 후, 영문자 하나가 주어졌을때 5개의 문자열들 중 세 번째나 네 번째 문자와 일치하는 문자열들을 모두 찾아내고 이러한 문자열의 개수를 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    char c;
    cin >> c;

    string str[5] = {"apple", "banana","grape", "blueberry", "orange"};
    int cnt=0;
    for(int i=0;i<5;i++)
        for(int j=2;j<=3;j++){
                if( str[i][j] == c ){ 
                        cnt++;
                        cout << str[i] << endl;
                        break;
                }
        }
    cout << cnt;
    return 0;
}