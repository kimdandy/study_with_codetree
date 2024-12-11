#include <iostream>
using namespace std;

/* Q. n1개의 원소로 이루어져 있는 수열 A의 정보와, n2개의 원소로 이루어져 있는 수열 B의 정보가 주어졌을 때 수열 B가 수열 A의 연속부분수열인지를 판단하는 프로그램을 작성해보세요.

수열 B가 수열 A의 원소들을 연속하게 뽑았을 때 나올 수 있는 수열이라면 연속부분수열이라 부릅니다.

예를 들어 수열 A가 [1, 5, 2, 6] 일때 수열 B가 [5, 2]라면 수열 B는 수열 A의 연속 부분 수열이지만, 만약 수열 B가 [5, 6]이라면 연속 부분 수열이 아닙니다. 
 */
int main() {
    int n1, n2; // 1 ≤ n1, n2 ≤ 100
    cin >> n1 >> n2;
    int a[100], b[100]; // n1_max = n2_max = 100
    for(int idx1=0;idx1<n1;idx1++) cin >> a[idx1]; // 1~100
    for(int idx2=0;idx2<n2;idx2++) cin >> b[idx2]; // 1~100

    int cur=0, cnt=0;
    for(int idx2=0; idx2<n2; idx2++)
        for(int idx1=cur; idx1<n1; idx1++){
            if(a[idx1]==b[idx2] && (      cur == 0      ||     a[idx1-1]==b[idx2-1]     ) ){ 
            // 두 원소가 같을 때    시작위치가 지정되지 않았거나 이전 인덱스의 값들도 동일하다면 
                cur=idx1;
                cnt++;
            }      
        }
    if(cnt == n2) cout << "Yes";
    else cout << "No";
    
    return 0;
}