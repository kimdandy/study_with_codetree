#include <iostream>
using namespace std;

int main() {
    // 소수점 맟춰 출력하기
    cout << fixed; // 소수점 고정
    
    int w = 13; // 지구에서의 무게
    double ratio_moon_gravity = 0.165; // 달에서의 중력 비율
    double w_moon = w * ratio_moon_gravity ; // 달에서의 무게

    cout.precision(6); // 소수점 아래 6자리까지 반올림
    cout << w << " * " << ratio_moon_gravity << " = " <<  w_moon;

    return 0;
}