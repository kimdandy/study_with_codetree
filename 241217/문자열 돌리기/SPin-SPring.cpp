#include <iostream>
using namespace std;

/* Q. 알파벳으로 이루어진 문자열이 주어지면, 문자열의 길이를 L이라고 했을 때 오른쪽으로 한 글자씩 밀어서 출력하는 것을 L회 반복하는 프로그램을 작성해보세요.

예)

ABCD가 주어지는 경우

ABCD
DABC
CDAB
BCDA
ABCD
*/
#include <string>
int main() {
    string str; // strlen : 2~10
    cin >> str;

    int l = str.length();
    
    cout << str << endl;
    for(int h=0;h<l;h++){
        char lst = str[l-1];
        for(int i=l-1;i>=0;i--) str[i] = str[i-1];
        str[0] = lst;
        cout << str << endl;
    }
    return 0;
}