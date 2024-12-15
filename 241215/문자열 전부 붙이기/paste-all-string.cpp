#include <iostream>
using namespace std;

/// Q. 정수 n이 주어지고, n개의 줄에 걸쳐 총 n개의 문자열이 주어질 때, 모든 문자열을 붙여 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    int n; // 1 ≤ n ≤ 10
    cin >> n;

    string str[10]; // n_max=10
    string allstr="";
    for(int i=0;i<n;i++) {
        cin >> str[i];
        allstr += str[i];
    }
    cout << allstr;
    return 0;
}