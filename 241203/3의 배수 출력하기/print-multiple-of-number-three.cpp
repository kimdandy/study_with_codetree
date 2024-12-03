#include <iostream>
using namespace std;

/// Q. while문을 사용해 1부터 정수 n까지의 3의 배수를 모두 출력하는 프로그램을 작성해보세요
int main() {
    int n;
    cin >> n;

    int i = 1;
    while(i<=n){
        if(i%3==0) cout << i << " ";
        i ++;
    }

    return 0;
}