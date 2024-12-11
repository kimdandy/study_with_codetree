#include <iostream>
using namespace std;

/// Q. n개의 정수가 주어졌을 때, 2 가 3 번째로 등장할 때 몇 번째 위치의 글자인지 출력하는 프로그램을 작성해보세요.
int main() {
    int n; // 3 ≤ n ≤ 100
    cin >> n;
    int arr[100]; // n_max=100
    int cnt=0;
    for(int i=0;i<n;i++){
        cin >> arr[i]; // 1~100
        if(arr[i]==2)  cnt++;
        if(cnt==3){ 
            cout << i+1; // arr[i]는 i+1 번째 원소
            break;
        }
    }

    return 0;
}