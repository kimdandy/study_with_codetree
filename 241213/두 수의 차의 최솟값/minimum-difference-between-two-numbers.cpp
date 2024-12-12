#include <iostream>
using namespace std;

/* Q. 
n개의 정수가 오름차순으로 주어집니다.
이 중 서로다른 두 개의 정수를 골랐을 때, 두 정수의 차가 최소가 되는 경우의 그 차이를 출력하는 프로그램을 작성해보세요.*/
int main() {
    int n; // 2 ≤ n ≤ 10
    cin >> n;
    int arr[10]; // n_max=10
    for(int i=0;i<n;i++) cin >> arr[i]; // 1~100

    int diff_min=100, big, small;
    // 오름차순 정렬 상태
    for(int i=0; i<n-1;i++){ //  작은 수, 마지막 수는 고를 수 없음
        for(int j=i+1;j<n;j++){ // 큰 수, 작은 수보다 커야함
            if(arr[j]-arr[i] < diff_min) diff_min = arr[j] - arr[i];
        }
    }

    cout << diff_min;
    
    return 0;
}