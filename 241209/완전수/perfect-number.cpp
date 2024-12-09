#include <iostream>
using namespace std;

/* Q. 
어떤 수 n의 진약수란, n을 나누어 떨어지게 하는 양의 정수 중에서 n이 아닌 수를 말합니다. 
이때, n의 진약수의 총합이 n과 같다면, n을 완전수라고 말합니다.

예를 들어, 28의 진약수로는 1, 2, 4, 7, 14가 있고, 이들의 합은 28이므로, 28은 완전수입니다. 
그러나, 20의 진약수로는 1, 2, 4, 5, 10이 있고, 이들의 합은 22이므로, 20은 완전수가 아닙니다.

두 정수 start와 end가 주어집니다. 
start 이상 end 이하인 완전수의 개수를 세는 프로그램을 작성해보세요.*/
int main() {
    int start, end; // 1<=start<=end<=1000
    cin >> start >> end;

    int cnt =0;
    for(int i=start;i<=end; i++){
        int sum = 0;
        for(int j=1; j<i; j++) if(i%j==0) sum += j;
        if(sum == i) cnt++;
    }
    cout << cnt;
    return 0;
}