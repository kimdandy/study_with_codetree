#include <iostream>
using namespace std;
//// 주어진 숫자들 중 최솟값 구하기
// 지금까지 구한 최솟값인 min_val이라는 값보다 현재 값인 elem이 더 작은 경우라면, 최솟값을 갱신

/// Q. N개의 정수가 입력으로 주어졌을 때, 그 중 최솟값과 최솟값을 갖는 원소의 개수를 출력하는 코드를 작성해보세요. 
int main() {
    int n; // 1 ≤ N ≤ 100
    cin >> n;
    int arr[100]; // N_max = 100
    int min =2147483647 , cnt=0;
    for(int i=0;i<n;i++){
        cin >> arr[i]; // -2^31 ~ 2^31 -1
        if(arr[i]<min) {
            min=arr[i];
            cnt=1;
        }
        else if(arr[i]==min) cnt++;
    }
    cout << min << " " << cnt;
    return 0;
}