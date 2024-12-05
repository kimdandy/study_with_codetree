#include <iostream>
using namespace std;

/// Q. 자연수 n을 입력받고, n개의 정수를 입력받아 합계와 평균을 출력하는 프로그램을 작성해보세요.
int main() {
    int n, z; // z : n개의 정수값 대입을 위한 변수
    // 1<= n<=100 , 1<=z<=1000
    cin >> n;
    int sum=0;
    for(int i=1;i<=n;i++){
        cin >> z;
        sum+=z;
    }
    cout << fixed;
    cout.precision(1); // 소수 첫째자리까지
    cout << sum << " " << double(sum)/n;
    return 0;
}