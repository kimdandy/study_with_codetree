#include <iostream>
using namespace std;

/// Q. 10개의 숫자가 주어졌을 때, 3의 배수의 개수와 5의 배수의 개수를 출력하는 프로그램을 작성해보세요.
int main() {
    int n, cnt3=0, cnt5=0;
    for(int i=1;i<=10;i++){
        cin >> n;
        if(n%3==0) cnt3 +=1 ;
        if(n%5==0) cnt5 +=1;
    }
    cout << cnt3 << " " << cnt5;
    return 0;
}