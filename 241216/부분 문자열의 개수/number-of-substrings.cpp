#include <iostream>
using namespace std;

/// Q. 두 문자열 A와 B가 주어졌을 때, 문자열 B가 문자열 A의 부분 문자열로써 등장하는 횟수를 구하는 프로그램을 작성해보세요.
#include <string>
int main() {
    string a, b; // 1 ≤ 문자열 A의 길이 ≤ 1,000
    cin >> a >> b; // b.length() = 2

    int cnt = 0;
    if(a.length() > 1){ 
        for(int i=0; i< a.length() - 1; i++) // b.length = 2
            if(a.substr(i, 2) == b) cnt++;
        cout << cnt;
    }
    else cout << 0; // a의 길이가 1일 수 도 있으므로
    return 0;
}