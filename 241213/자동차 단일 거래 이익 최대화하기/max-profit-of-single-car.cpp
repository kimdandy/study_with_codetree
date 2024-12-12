#include <iostream>
using namespace std;

/* Q. 향후 n년 간의 자동차 가격 정보가 미리 주어졌을 때, 자동차를 단 한 번 사서 되팔 때의 이익을 최대화하고자 합니다. 낼 수 있는 최대 이익을 출력하는 프로그램을 작성해보세요. 
단, 자동차를 사기 전에는 팔 수 없습니다. */
int main() {
    int n; // 1 ≤ n ≤ 1,000
    cin >> n;
    int arr[1000]; // n_max=1000
    for(int i=0;i<n;i++) cin >> arr[i]; // 1~2,147,483,647
    
    // min_year<max_year 
    int max_profit = 0;
    for(int i=0;i<n-1;i++){ // 자동차를 매입할 해=기준이 되는 해 
                // ^ 마지막해는 매입 할 수 없음; 전년도 까지 매입해야 마지막년도에 팔 수 있음
        for(int j=i+1;j<n;j++){ // 자동차를 되팔 해
            if(arr[j]-arr[i] > max_profit) max_profit = arr[j] - arr[i];
        }
    }
    cout << max_profit;
    return 0;
}