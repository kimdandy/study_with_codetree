#include <iostream>
using namespace std;

/// Q. N개의 정수가 주어졌을 때, 중복하여 등장하지 않는 정수 중 최댓값을 구하는 프로그램을 작성해보세요.
int main() {
    int n; // 1 ≤ N ≤ 1,000
    cin >> n;
    int arr[1000]; // N_max=1000
    int dup[1000]={}; // 중복 인 위치에 1을 배치하는 배열

    
    for(int i=0;i<n;i++) {
        cin >> arr[i]; // 1~1000

        for(int j=0; j<i;j++) { // 중복체크를 위해 이전 원소들과 값 비교
            if(arr[j]== arr[i]) { // 중복이 확인된다면
                dup[i]=1;
                dup[j]=1; // 두 위치 모두에 1 배치
                break;
            }
        }
    }
    int max = -1; // default : -1
    for(int i=0;i<n;i++) {
        if(dup[i]==1) continue; // 중복수라면 통과
        else if(arr[i]>max) max=arr[i];
    }

    cout << max;
    return 0;
}