#include <iostream>
using namespace std;

/// Q. 첫 번째 줄에 숫자 n이 주어지고, 그 다음 n개의 줄에 걸쳐 n개의 문자열이 주어질 때, 모든 문자열 길이의 합과 주어진 문자열 중 첫 번째 문자로 'a'가 몇 번 나왔는지를 출력하는 프로그램을 작성해보세요
#include <string>
int main() {
    int n; // 1 ≤ n ≤ 10
    cin >> n;

    string str[10]; // n_max = 10
    int len_sum=0, a_cnt=0;
    for(int i=0;i<n;i++) {
        cin >> str[i]; // 1~100
        len_sum += str[i].length();
        if(str[i][0] == 'a') a_cnt++;
    }
    cout << len_sum << " " << a_cnt;
    return 0;
}