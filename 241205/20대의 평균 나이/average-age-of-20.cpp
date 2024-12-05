#include <iostream>
using namespace std;

/// Q. 몇 명의 사람들의 나이가 차례대로 주어질 때, 처음으로 20대가 아닌 다른 나이대의 사람이 나오기 전까지 입력된 나이들의 평균을 구하는 프로그램을 작성해보세요.
// 첫 번째 사람은 반드시 20대라고 가정해도 좋습니다.
int main() {
    int age; // 1<=age<=100
    int sum=0, cnt=0;
    while(3){ // 1이 아니라 다른 숫자를 넣어도 무한루프 성립
        cin >> age;
        if(age/10 != 2) break;
        sum+=age;
        cnt+=1;
    }
    cout << fixed;
    cout.precision(2);
    cout << double(sum)/cnt;
    return 0;
}