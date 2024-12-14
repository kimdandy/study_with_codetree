#include <iostream>
using namespace std;

/// Q. 첫 번째 줄에 공백을 포함할 수도 있는 문자열이 주어지고, 두 번째 줄에 소문자 알파벳이 주어지면 앞서 주어진 문자열에 해당 소문자 알파벳이 몇 개 있는지 세어 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    string str; // 1~100
    char c;
    getline(cin, str);
    cin >> c;

    int cnt=0;
    for(int i=0;i<100;i++)
        if(str[i] == c) cnt ++;

    cout << cnt;
    return 0;
}