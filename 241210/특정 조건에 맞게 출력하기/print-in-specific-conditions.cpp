#include <iostream>
using namespace std;

/// Q. 정수가 차례로 주어지다가 0이 주어지면 0을 제외하고 그때까지 주어진 정수를 차례로 출력하되 그 수가 홀수이면 3을 더한 값을, 짝수이면 2로 나눈 몫을 출력하는 프로그램을 작성해보세요.
int main() {
    int arr[100]; // arr_sz_max=100
    int sz;
    for(int i=0; i<100; i++){
        cin >> arr[i];
        if(arr[i]==0) {
            sz=i;
            break;    
        }
    }
    for(int i=0;i<sz;i++){
        if(arr[i]%2==1) cout << arr[i]+3;
        else cout << arr[i]/2;
        cout << " ";
    }
    return 0;
}