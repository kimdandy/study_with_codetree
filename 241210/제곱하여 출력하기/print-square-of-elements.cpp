#include <iostream>
using namespace std;
//// 배열값 변경하기

/// Q. n개의 원소가 주어졌을 때, 주어진 n개의 원소에 각각 제곱을 하여 출력하는 프로그램을 작성해보세요.
int main() {
    int n; // 1 ≤ n ≤ 100
    cin >> n;
    int arr[100]; // n_max=100
    for(int i=0;i<n;i++){ cin >> arr[i]; // 1 ≤ arr[i] ≤ 100
        arr[i]*=arr[i];
        cout << arr[i] << " ";
    }
    return 0;
}
