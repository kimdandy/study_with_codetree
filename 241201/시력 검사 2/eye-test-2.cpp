#include <iostream>
using namespace std;


// Q. 양쪽 눈 시력의 평균값을 실수(real number)로 입력받아 1.0 이상이면 High, 0.5 이상이면 Middle, 아니면 Low라고 출력하는 프로그램을 작성해주세요.
int main() {
    double a;
    cin >> a;

    if (a>=1.0){
        cout << "High";
    }
    else if(a>=0.5){
        cout << "Middle";
    }
    else{
        cout << "Low";
    }
    return 0;
}