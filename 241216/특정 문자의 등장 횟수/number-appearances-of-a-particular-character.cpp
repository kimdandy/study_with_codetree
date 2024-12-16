#include <iostream>
using namespace std;

// 문자열.substr(시작 인덱스, 부분문자열 길이)

/// Q. 문자열이 주어지면 주어진 문자열에 'ee', 'eb'가 각각 몇 번씩 나왔는지를 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    string str; // strlen~20
    cin >> str;

    string fn[2] = {"ee", "eb"};
    for(int k=0; k<2; k++){
        int cnt =0;
        for(int i=0; i<str.length()-1;i++) // 2개씩 묶어 확인
            if(str.substr(i,  2) == fn[k]) cnt++;
        cout << cnt << " ";
    }
    return 0;
}