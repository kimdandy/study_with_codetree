#include <iostream>
using namespace std;

/// Q. 숫자와 알파벳으로 이루어진 문자열 A가 주어졌을 때, 그 중 숫자들만 골라 그 합을 출력하는 프로그램을 작성해보세요.
#include <string>
#include <cctype>
int main() {
    string a; // 1 ≤ 문자열의 길이 ≤ 20
    cin >> a;

    int sum = 0;
    for(int i=0;i<a.length();i++)
        if(isdigit(a[i])) sum+=(int)(a[i] - '0');
        // 문자열 속 숫자는 아스키 코드로 치환가능한 문자 이므로 
        // 아스키 코드에서 0에 해당하는 아스키코드를 빼면 문자에 해당하는 숫자값을 얻을 수 있다.
    cout << sum;
    return 0;
}