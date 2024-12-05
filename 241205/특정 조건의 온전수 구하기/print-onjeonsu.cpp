#include <iostream>
using namespace std;

/* Q. 1이상 n이하의 수 중 온전수를 출력하는 프로그램을 작성해보세요.

온전수란 다음 조건을 모두 만족하지 않는 수를 뜻합니다.

#2로 나누어 떨어지는 경우
#일의 자리가 5인 경우
#3으로 나누어 떨어지면서 9로는 나누어 떨어지지 않는 수*/
int main() {
    int n; // 1<=n<=200
    cin >> n;

    for(int i=1;i<=n;i++){
        if(i%2==0 || i%10==5 || (i%3==0 && i%9!=0)) continue;
        cout << i << " ";
    }
    return 0;
}