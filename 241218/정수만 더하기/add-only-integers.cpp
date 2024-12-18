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
        if(isdigit(a[i])) sum+=a[i];
    cout << sum;
    return 0;
}