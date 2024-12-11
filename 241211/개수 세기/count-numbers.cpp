#include <iostream>
using namespace std;
//// 특정 원소의 개수

/* Q. 정수 n이 주어지면 그 횟수만큼 수가 주어집니다. 
그 중 m이 몇 번 등장하는지 구해 출력하는 프로그램을 작성해보세요.*/
int main() {
    int n, m; // 1 ≤ n ≤ 100 
    cin >> n >> m;
    int arr[100]; // n_max = 100
    int cnt=0;
    for(int i=0; i<n; i++){
        cin >> arr[i]; // 1 ≤ 주어지는 정수, m ≤ 99
        if(arr[i]==m) cnt++;
    }
    cout << cnt;

    return 0;
}