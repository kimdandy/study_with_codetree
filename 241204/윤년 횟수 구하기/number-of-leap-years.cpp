#include <iostream>
using namespace std;

/* Q. n이 주어지면 1년부터 n년까지 윤년이 총 몇 번 있었는지를 구하는 프로그램을 작성해보세요. 윤년일 조건은 다음과 같습니다.

-4로 나누어 떨어지는 해는 윤년, 그 밖의 해는 평년입니다.
-단, 예외적으로 100으로 나누어 떨어지되 400으로 나누어 떨어지지 않는 해는 평년으로 합니다.*/
int main() {
    int n, cnt=0;
    cin >> n;

    for (int i=1; i<=n; i++){
        if(i%4==0) {
            if(i%400==0 || i%100!=0) cnt+=1;
            }
    }
    
    cout << cnt;
    return 0;
}