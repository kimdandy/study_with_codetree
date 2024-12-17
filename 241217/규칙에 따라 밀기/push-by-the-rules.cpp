#include <iostream>
using namespace std;

/* Q. 문자열 A가 주어졌을 때, 명령에 따라 문자열 A를 민 결과를 출력하는 프로그램을 작성해보세요.

명령은 L 또는 R 로 이루어진 명령 문자열로 주어지고, 명령에 따라 순서대로 다음을 반복합니다.

% L일 때는 좌측으로 한 칸 밀고, R일 때는 우측으로 한 칸 미는 것을 진행합니다.*/
#include <string>
int main() {
    string a, cmd; // 1 ≤ 문자열 A의 길이 ≤ 100 , 1 ≤ 명령 문자열의 길이 ≤ 100
    cin >> a >> cmd;

    for(int i=0;i<cmd.length();i++){
        if(cmd[i] == 'L'){
            char fst = a[0];
            for(int j=0;j<a.length();j++) a[j] = a[j+1];
            a[a.length()-1] = fst;
        }
        else if(cmd[i]=='R'){
            char lst = a[a.length()-1];
            for(int j=a.length()-1;j>=0;j--) a[j] =a[j-1];
            a[0] = lst;
        }
    }
    cout << a;


    return 0;
}