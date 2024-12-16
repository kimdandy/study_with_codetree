#include <iostream>
using namespace std;

/* Q. 주어진 입력 문자열에 대하여 목적 문자열이 부분 문자열로 존재하는 경우, 부분 문자열의 시작 인덱스를 출력하는 코드를 작성해보세요. 
인덱스는 0부터 시작한다고 가정합니다. */
#include <string>
int main() {
    string ipt, fnd; // 1 ≤ 목적 문자열의 길이(M) ≤ 입력 문자열의 길이 (N) ≤ 1,000
    cin >> ipt >> fnd;

    /*// find 사용
    if(ipt.find(fnd) != string::npos) cout << ipt.find(fnd);
    else cout << -1;
    */
    // fing 미사용 및 substr 사용
    bool isexist = false;
    int n = ipt.length(), m=fnd.length(); 
    for(int i=0; i< n - (m-1) ; i++){ // 탐색 범위 : 입력문자열 크기 - (목적 문자열 크기 -1)
        if(ipt.substr(i, m) == fnd){
            cout << i;
            isexist = true;
            break;
        }
    }
    if(isexist == false) cout << -1;

    return 0;
}