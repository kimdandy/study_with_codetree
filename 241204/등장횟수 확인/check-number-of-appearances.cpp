#include <iostream>
using namespace std;

/// Q. 5개의 숫자가 주어졌을 때, 짝수가 몇 번 등장했는지 확인해보는 프로그램을 작성해보세요.
int main() {
    int n, cnt=0;
    for (int i =0;i<5;i++){
        cin >> n;
        if (n%2==0) cnt +=1;
    }

    cout << cnt;
    return 0;
}