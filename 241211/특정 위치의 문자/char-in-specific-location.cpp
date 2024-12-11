#include <iostream>
using namespace std;
//// 문자를 원소로 갖는 배열
// 가장 간단하게는 몇 번째 index에 있는지를 저장해줄 idx라는 변수를 사용해 다음과 같이 코드를 작성

/* Q. 6개의 문자 배열을 만들고, 각각 'L', 'E', 'B', 'R', 'O', 'S'로 초기화 합니다.

입력으로 문자 한 개가 주어지면, 앞에서 만든 배열에서 해당 문자가 있는 위치를 출력하는 프로그램을 작성해보세요.

배열의 첫 번째 위치는 0번이며, 배열에 없는 문자가 주어지면 "None"이라는 메시지를 출력합니다.*/
int main() {
    char c;
    cin >> c;

    char arr[6] = { 'L', 'E', 'B', 'R', 'O', 'S'};
    bool isexist=false;
    for(int idx=0;idx<6;idx++) {
        if(arr[idx]==c) {
            cout << idx;
            isexist = true; 
            break;
        }
    }
    if(isexist == false) cout << "None";
    return 0;
}