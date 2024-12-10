#include <iostream>
using namespace std;

/* Q. 
n개의 원소가 주어졌을 때, 주어진 n개의 원소 중 짝수인 값만 출력하는 프로그램을 작성해보세요.
 단, 짝수인 값을 새로운 배열에 저장한 뒤 출력해 보도록 합니다.*/
int main() {
    int n; // 1 ≤ n ≤ 100;
    cin >> n;
    int arr[100]; // n_max=100
    for(int i=0;i<n;i++){
        cin >> arr[i]; // 1 ≤ arr[i] ≤ 100
        if(arr[i]%2==0) cout << arr[i] << " ";
    }
    return 0;
}