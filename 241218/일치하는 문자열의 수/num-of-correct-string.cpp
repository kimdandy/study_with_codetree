#include <iostream>
using namespace std;
//// 문자열 비교
// 숫자 비교와 마찬가지로 == 연산자를 그대로 사용

// 문자열 끼리는 <, > 연산 역시 가능
// 사전순으로 앞선 문자열이 누구인가에 대한 비교 => 값이 더 작을 수록 사전순으로 앞서다는 것을 의미

/* Q. 
정수 n과 문자열 A가 주어집니다. 
그 다음 n개의 줄에 걸쳐 문자열들이 주어지면 문자열 A와 일치하는 문자열의 개수를 세는 프로그램을 작성해보세요.*/
#include <string>
int main() {
    int n; // 1 ≤ n ≤ 100
    cin >> n;

    string a; // 1 ≤ 입력으로 주어지는 문자열의 길이 ≤ 100
    cin >> a;

    int cnt =0;
    string str;
    for(int i=0;i<n;i++){
        cin >> str;
        if(str == a) cnt++;
    }

    cout << cnt;
        
    return 0;
}