#include <iostream>
using namespace std;

/* Q. 문자열 s와 q개의 질의가 주어졌을 때 각 질의를 수행하는 프로그램을 작성해보세요. 단, 질의를 순서대로 수행해야 하며, 문자열은 질의에 따라 계속 변합니다. 질의의 종류는 다음과 같습니다.

1 a b

a번째 문자와 b번째 문자를 교환한 뒤 출력합니다.

2 a b

문자 a를 전부 문자 b로 변경한 뒤 출력합니다.*/
#include <string>
int main() {
    string s; // 1 ≤ 문자열 s의 길이 ≤ 100
    int q, qn, an, bn; // 1 ≤ q ≤ 100 , 1 ≤ an, bn ≤ n, an != bn
    char ac, bc;
    cin >> s >> q;
    for(int k=0; k<q;k++){
        cin >> qn;
        if(qn== 1){
            cin >> an >> bn;
            char temp;
            temp = s[an-1];
            s[an-1] = s[bn-1];
            s[bn-1] = temp;
            cout << s << endl;
        }
        if(qn == 2){
            cin >> ac >> bc;
            for(int i=0;i<s.length();i++)
                if(s[i] == ac) s[i] = bc;
            cout << s << endl;
        }
    }
    return 0;
}