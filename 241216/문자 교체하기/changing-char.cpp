#include <iostream>
using namespace std;

/* Q. 알파벳으로 이루어진 문자열이 두 개 주어지면 첫 번째 문자열의 앞부분 두 글자를 복사해 두 번째 문자열의 앞부분 두 글자로 교체한 후 두 번째 문자열만 출력하는 프로그램을 작성해보세요. 
단, 주어지는 문자열은 최소 두 글자 이상으로 이루어져 있습니다.*/
#include <string>
int main() {
    string fst, snd; // strlen : 2~20
    cin >> fst >> snd;

    snd[0] = fst[0]; snd[1] = fst[1];

    cout << snd;
    
    return 0;
}