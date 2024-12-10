#include <iostream>
using namespace std;

/// Q. 배열의 원소 10개가 주어졌을 때, 원소 중 3의 배수가 처음으로 등장하는 부분의 바로 앞 원소를 출력하는 프로그램을 작성해보세요.
int main() {
    int arr[10];
    for(int i=0;i<10;i++){
        cin >> arr[i]; // 1<=arr[i]<=100
        if(arr[i]%3==0){
            cout << arr[i-1];
            break;
        }
    }
    return 0;
}