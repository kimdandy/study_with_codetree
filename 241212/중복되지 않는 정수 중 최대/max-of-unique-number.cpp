#include <iostream>
using namespace std;

/// Q. N개의 정수가 주어졌을 때, 중복하여 등장하지 않는 정수 중 최댓값을 구하는 프로그램을 작성해보세요.
int main() {
    int n; // 1 ≤ N ≤ 1,000
    cin >> n;
    int arr[1000]; // N_max=1000
    int max = -1; // default : -1
    for(int i=0;i<n;i++){
        cin >> arr[i]; // 1~1000
        if(arr[i]==max) max = -1;
        else if(arr[i]>max) max=arr[i];
    }
    cout << max;
    return 0;
}