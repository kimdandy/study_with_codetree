#include <iostream>
using namespace std;

/* Q. 두 정수 start와 end가 주어집니다.

정수의 약수란, 그 수를 나누었을 때 나머지가 없이 떨어지는 양의 정수를 뜻합니다. 
예를 들어, 6의 약수는 1, 2, 3, 6으로 총 네 개입니다.

start 이상 end 이하인 정수 중에서, 약수가 정확하게 세 개인 수의 개수를 구하는 프로그램을 작성해보세요. */
int main() {
    int start, end; // 1<=start<=end<=1000
    cin >> start >> end;

    int cnt =0; // cnt:범위 내 약수의 개수가 3개인 정수의 개수
    for(int i=start;i<=end;i++){
        int cnt2 = 0; // cnt2: 약수의 개수
        for(int j=1; j<=i; j++) if(i%j==0) cnt2++;
        if(cnt2 == 3) cnt++;
    }
    cout << cnt;
    return 0;
}