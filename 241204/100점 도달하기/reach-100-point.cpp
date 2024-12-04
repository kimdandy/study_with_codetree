#include <iostream>
using namespace std;

/* Q. 시험점수에 따라 등급을

90점 이상을 A,

80점 이상을 B,

70점 이상을 C,

60점 이상을 D,

60점 미만을 F 라고 합니다.

주어지는 점수 n부터 100점까지 1점씩 증가하며 각 점수에 해당하는 등급을 출력하는 프로그램을 작성해보세요. */
int main() {
    int n;
    cin >> n;

    for (int i=n; i<=100; i++){
        if(i>=90) cout << "A";
        else if(i>=80) cout << "B";
        else if(i>=70) cout << "C";
        else if(i>=60) cout << "D";
        else cout << "F";
        cout << " ";
    }
    return 0;
}