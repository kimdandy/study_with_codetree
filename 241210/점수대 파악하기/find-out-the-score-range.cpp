#include <iostream>
using namespace std;

/// Q. 100명 이하인 학생들의 점수가 주어지다가 0이 주어지면 그때까지 주어진 점수를 10점 단위로 구분하여 점수대별 학생 수를 출력하는 프로그램을 작성해보세요.
int main() {
    int arr[100]; // size_max = 100
    int sz; // 실제 배열의 크기
    for(int i=0;i<100;i++) {
        cin >> arr[i]; // 1 ≤ arr[i] ≤ 100
        if(arr[i]==0){
            sz=i;
            break;
        }
    }

    for(int j=10; j>0; j--){
        int cnt=0;
        for(int i=0;i<sz;i++)  if(arr[i]/10==j) cnt++;
        cout << j*10 << " - " << cnt << endl;
    }


    return 0;
}