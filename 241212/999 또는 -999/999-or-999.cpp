#include <iostream>
using namespace std;

/// Q. 최대 100개의 세 자리 이하 정수가 차례로 주어지다가 999나 -999가 주어지면 입력 받는 것을 종료하고 이 수를 제외한 수 중 가장 큰 수와 가장 작은 수를 출력하는 프로그램을 작성해보세요.
int main() {
    int arr[100]; // arr_size_max =100
    int max=-999, min=999;
    for(int i=0;i<100;i++){
        cin >> arr[i]; // -999~999

        if(arr[i]==999 || arr[i]==-999) break;

        if(arr[i]>max) max=arr[i];
        
        if(arr[i]<min) min=arr[i];
    }
    cout << max << " " << min;
    return 0;
}