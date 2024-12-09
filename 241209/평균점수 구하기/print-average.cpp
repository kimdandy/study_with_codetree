#include <iostream>
using namespace std;

/// Q. 학생 8명의 점수가 주어지면 평균을 출력하는 프로그램을 작성해보세요
int main() {
    double arr[8];
    double sum=0;
    for(int i=0;i<8;i++) {
        cin >> arr[i]; // 0<=arr[i]<=100
        sum += arr[i];
    }
    cout << fixed;
    cout.precision(1);
    cout << sum/8;

    return 0;
}