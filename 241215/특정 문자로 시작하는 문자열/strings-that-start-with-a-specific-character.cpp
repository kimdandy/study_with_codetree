#include <iostream>
using namespace std;

/// Q. 알파벳 소문자로 이루어진 n개의 문자열이 주어지고, 알파벳 한 개가 주어졌을 때, 해당 알파벳으로 시작하는 문자열의 개수와 그 문자열들의 길이의 평균을 구하는 프로그램을 작성해보세요.
#include <string>
int main() {
    int n; // 1 ≤ n ≤ 20
    cin >> n;

    string str[20]; // n_max = 20
    for(int i=0; i<n;i++) cin >> str[i]; // 1 ≤ (int)str[i] ≤ 20
    
    char c;
    cin >> c;

    int cnt =0, len_sum=0;
    for(int i=0;i<n; i++)
        if(str[i][0] == c){
            cnt++;
            len_sum += str[i].length();
        }
    cout << fixed;
    cout.precision(2);
    cout << cnt << " " << double(len_sum)/cnt;
    
    return 0;
}