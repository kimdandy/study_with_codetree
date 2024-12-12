#include <iostream>
using namespace std;

/// Q. 입력으로 주어진 N개의 정수를 내림차순으로 정렬 했을 때 첫 번째와 두 번째 정수를 출력하는 코드를 작성해보세요.
int main() {
    int n; // 2 ≤ N ≤ 100
    cin >> n;
    int arr[100]; // n_max=100
    int max=-2147483647, max2=-2147483647;
    for(int i=0;i<n;i++){
        cin >> arr[i]; // -2^31~2^31 -1
        if(arr[i]>max2) {
            max2 = arr[i];
            if(max<max2){
                int temp = max;
                max = max2;
                max2 = temp;
            }
        }
    }
    cout << max << " " << max2;

    return 0;
}