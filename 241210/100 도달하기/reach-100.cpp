#include <iostream>
using namespace std;

/// Q. 정수 n이 주어지면 정수 n을 두 번째 항으로 초기화하고 첫 번째 항은 1로 초기화 한 후에, 세 번째 항부터 전전항과 전항을 더한 수로 채워나가다가 100을 넘길때까지 출력하는 프로그램을 작성해보세요.
// 첫 번째 줄에 공백을 사이에 두고 수들을 출력합니다.
int main() {
    int n; // 1 ≤ n ≤ 10
    cin >> n;

    int arr[100]; // sz_max=100
    for(int i=0;i<100;i++){
        if(i==0) arr[i]=1;
        else if(i==1) arr[i]=n;
        else arr[i]=arr[i-1]+arr[i-2];
        cout << arr[i] << " ";
        if(arr[i]>100) break;
    }
    return 0;
}