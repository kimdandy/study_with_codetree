#include <iostream>
using namespace std;
//// Counting 배열
// 중첩 반복문을 이용하여 각 숫자가 몇 번씩 등장하는지를 세줄 수 있음
// count_arr의 해당 숫자 index에 1씩 증가시키는 식으로 진행

/// Q. 원소의 크기가 1이상 9이하인 n개의 원소가 주어졌을 때, 1부터 9까지 각각 몇 번씩 나왔는지를 출력하는 프로그램을 작성해보세요.
int main() {
    int n; //  1 ≤ n ≤ 100
    cin >> n;
    int arr[100]; // n_max=100
    for(int i=0;i<n;i++) cin >> arr[i]; // 1 ≤ arr[i] ≤ 9

    for(int j=1; j<=9; j++){
        int cnt =0;
        for (int i=0; i<n; i++){
            if(arr[i]==j) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}