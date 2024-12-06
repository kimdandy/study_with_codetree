#include <iostream>
using namespace std;

/* Q. 정수 n이 2 이상 (n−1) 이하의 어떤 정수로 나누어 떨어진다면, n은 합성수라고 합니다.

예를 들어, 35는 5로 나누어 떨어지므로 합성수입니다. 
그러나, 13은 2 이상 12 이하의 어떤 정수로도 나누어 떨어지지 않으므로 합성수가 아닙니다.

정수 n이 주어질 때, n이 합성수인지 아닌지 판별하는 프로그램을 작성해보세요. */
int main() {
    int n; // 2<=n<=500
    cin >> n;

    bool st = false;
    for (int i=2;i<n;i++){
        if(n%i==0) {
            st = true;
            break;
        }
    }
    if(st==true) cout << "C";
    else cout << "N";
    
    return 0;
}