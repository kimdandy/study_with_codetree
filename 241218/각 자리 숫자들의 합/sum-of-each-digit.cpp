#include <iostream>
using namespace std;

/// Q. 정수 n이 주어지면 각 자리 숫자들의 합을 구해 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    int n; // 1 ≤ n ≤ 10,000
    cin >> n;

    string sn = to_string(n);

    int sum=0;
    for(int i=0;i<sn.length();i++) sum+= (int)(sn[i] - '0');
                                // sum+= stoi(sn[i]) // -> 런타임 에러 발생 

    cout << sum;
    
    return 0;
}