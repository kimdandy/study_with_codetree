#include <iostream>
using namespace std;

/// Q. 두 개의 단어가 주어지면 길이가 더 긴 단어와 길이를 출력하는 프로그램을 작성해보세요
#include <string> // 문자열 함수 string 호출 헤더

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    int stl1 = str1.length(), stl2 = str2.length();
    if(stl1 > stl2) cout << str1 << " " << stl1;
    else if(stl1 < stl2) cout << str2 << " " << stl2;
    else cout << "same";

    return 0;
}